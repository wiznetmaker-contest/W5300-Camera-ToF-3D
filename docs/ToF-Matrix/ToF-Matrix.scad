
 
 module vl53l7(alpha=0, beta=0, c="red"){
     rotate([alpha,0,beta]){
 color (c, alpha=0.3) polyhedron(
  points=[ [10,10,sqrt(200)],[10,-10,sqrt(200)],[-10,-10,sqrt(200)],[-10,10,sqrt(200)], // the four points at base
           [0,0,0]  ],                                 // the apex point 
  faces=[ [0,1,4],[1,2,4],[2,3,4],[3,0,4],              // each triangle side
              [1,0,3],[2,1,3] ]                         // two triangles for square base
 );

 }
 }
 
 vl53l7(0,0, "yellow");
 vl53l7(60,0, "red");
 vl53l7(60,60, "green");
 vl53l7(60,120, "blue");
 vl53l7(60,180, "red");
 vl53l7(60,240, "green");
 vl53l7(60,300,"blue");
 color("black", alpha=0.1) circle(20);

 
 