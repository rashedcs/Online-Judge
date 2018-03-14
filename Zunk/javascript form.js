<%- include header %>
<!DOCTYPE html>
<html>
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

</head>
<body>

 <% if (data[0].user_name=="admin")
 { %>
                 
     <div class="container">
  <h2>Add Patient Test </h2>
  <!-- Trigger the modal with a button -->
  <button type="button" class="btn btn-default btn-lg" id="myBtn">Login</button>

  <!-- Modal -->
  <div class="modal fade" id="myModal" role="dialog">
    <div class="modal-dialog">
    
     <!-- Modal content-->
    <div class="modal-content">
            <div class="modal-header">
              <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
              <h4 class="modal-title" id="myModalLabel"> Add Player </h4>
            </div>

       <form action="/home/test" role="form">
           <div class="modal-body">
                  <div class="form-group">
                    <label for="usrname"><span class="glyphicon glyphicon-user"></span> Patient Id</label>
                    <input type="text" class="form-control" name="id" placeholder="id">
                  </div>

                  <div class="form-group">
                   <label for="name"><span class="glyphicon glyphicon-user"></span> Patient Name</label>
                     <input type="text" class="form-control" name="name" placeholder="name">
                  </div>

                  <div class="form-group">
                    <label for="test"><span class="glyphicon glyphicon-user"></span>Add Test</label>
                    <input type="text" class="form-control" name="test" placeholder="Test">
                  </div>
              </div>
            
              <div class="modal-footer">
                    <CENTER>  <p id="errorcmass" style="color: red;"></p></CENTER>
                    <button type="button" class="btn btn-danger" data-dismiss="modal"><i class="fa fa-times"></i> Close</button>
                    <button class="btn btn-success createnewdrawbtn" type="button" id="createnewdrawbtn" onclick="createTournament()"><i class="fa fa-paper-plane"></i> Save </button>
                    <button class="btn btn-info" type="button" id="buttonsumbit" style="display: none;"><i class="fa fa-spinner fa-pulse"></i> Please Wait...</button>
              </div>
           </form>
      </div>
      
    </div>
  </div> 
</div>
<script>
$(document).ready(function(){
    $("#myBtn").click(function(){
        $("#myModal").modal();
    });
});
</script>

  
<%}%>



</html>
</head>
<%- include footer %>

   <!--
      <div class="jumbotron">
        <h1>Welcome</h1>
        <p>Hello Dashboard</p>
        <p>
          <a class="btn btn-lg btn-primary" href="/home/profile" role="button">Profile view »</a>
        </p>
      </div>
-->

