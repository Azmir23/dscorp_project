</head>
<body class="invisible <?php if(isset($GLOBALS['page'])) print $GLOBALS['page'];else print "home-not-auth"; ?>">
<div id="dialog"></div><div id="hiddendiv"></div>

<nav id="navigation" class="navbar navbar-inverse <?php /* navbar-fixed-top*/ ?>">
    <div class="container-fluid">
        <div class="navbar-header">
            <button type="button" class="navbar-toggle collapsed" data-toggle="collapse_" data-target="#menuTop" aria-expanded="false">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
            <a href="./?page=home" class="navbar-brand"><img src="ui/phplist-ui-bootstrap/logo.svg" alt="phpList, email newsletter manager, logo" title="phpList, the world's most popular Open Source newsletter manager" /> <span class="brand-name">phpList</span></a>
        </div>
        <div id="logged" class="navbar-right">
            <?php
              if ($GLOBALS["require_login"] && (!isset ($_SESSION["adminloggedin"]) || !$_SESSION["adminloggedin"])) {
                print ('<a id="login" class="navbar-btn btn-primary btn-sm" href="./?page=login">Login</a> ');
              } else {
                print ('<a id="logout" class="navbar-btn btn-primary btn-sm" href="./?page=logout">Logout</a>');
              }
            ?>
        </div>
    </div>
</nav>

<div id="container" class="content-wrapper">
    <div id="globalhelp">
    <?php
      $globalhelp = $pageinfo->content();
      if (!empty($globalhelp)) { ?>
        <div class="collapse" id="helptarget">
            <div class="alert alert-info">
                <?php print $globalhelp ?>
            </div>
        </div>
        <button class="btn btn-xs btn-danger pull-right glyphicon glyphicon-info-sign" type="button" data-toggle="collapse" data-target="#helptarget" aria-expanded="false" aria-controls="collapseExample" title="<?php echo s('HELP') ?>"></button>
    <?php } ?>
    </div>

	<div class="clearfix"></div>

    <div id="sidebar" class="sidebar col-md-2">
        <?php echo $firstInstallButton?>
        <div id="context-menu" class="menu block">
            <?php print _topMenu(); ?>
        </div>
        </br>
        <div id="language">
            <?php print $languageswitcher; ?>
        </div>
    </div>
    <!-- end #sidebar -->
    <div id="content" class="col-md-10">
    <div id="wrapp">
    <div id="progressbar"></div>
<!-- content start here -->
