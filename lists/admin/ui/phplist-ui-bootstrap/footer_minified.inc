            <div class="clear"></div>
            <?php include dirname(__FILE__).'/rssfeed.php'; ?>
	    </div>
        <div id="footer">
            <div class="version pull-left">
                <a href="./?page=home">Home</a>               
            </div>
            <div class="ressources pull-right">
                <a href="#"><img src="ui/phplist-ui-bootstrap/images/facebook.svg" alt="facebook, logo" title="Facebook" /></a>&nbsp; |  
                <a href="#"><img src="ui/phplist-ui-bootstrap/images/twitter.png" alt="Twitter, logo" title="Twitter" /></a>
            </div>
        </div>
    </div> <!-- end #content -->
</div> <!-- end #container -->


<script type="text/javascript" src="ui/phplist-ui-bootstrap/js/jquery-1.12.1.min.js"></script>
<script type="text/javascript" src="js/phplistapp.js"></script>
<script type="text/javascript" src="ui/phplist-ui-bootstrap/js/dist/phpList_ui_bootstrap.min.js"></script>
<!--script type="text/javascript" src="ui/phplist-ui-bootstrap/js/phpList3ToBootstrap.js"></script-->

<script>
/* do not remove this from here */
$(document).ready(function(){
    if ( $('body').hasClass('invisible') ){
        myfunction();
    }
});
</script>