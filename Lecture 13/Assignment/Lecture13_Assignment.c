//Lecture 13 Assignment

#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
};
//Solve for slope
float solve_Slope(struct line line1){
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    return slope;
}
//Solve for Midpoint of X1 and X2
float solve_Midpoint_x(struct line line1){
    float midpoint_x = ((line1.point1.x + line1.point2.x) / 2);
    return midpoint_x;
}
//Solve for Midpoint of Y1 and Y2
float solve_Midpoint_y(struct line line1){
    float midpoint_y = ((line1.point1.y + line1.point2.y) / 2);
    return midpoint_y;
}
//Solve for Distance
float solve_Distance(struct line line1){
    float x_squared = (line1.point1.x- line1.point2.x) * (line1.point1.x- line1.point2.x);
    float y_squared = (line1.point1.y- line1.point2.y) * (line1.point1.y- line1.point2.y);
    float distance = sqrt(x_squared + y_squared);
    return distance;
}
//Main Function
float main (){
    struct line line1;
    float b, Slope, Midpoint_x, Midpoint_y, Distance;

    //Ask user for x,y coordinates of first point
    printf("Enter x and y for point1 in one line: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);

    //Ask user for x,y coordinates of second point
    printf("Enter x and y for point2 in one line: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    Slope = solve_Slope(line1);
    Midpoint_x = solve_Midpoint_x(line1);       //Function Calls
    Midpoint_y = solve_Midpoint_y(line1);
    Distance = solve_Distance(line1);

    //Solving b in the Y = mx + b (for Slope-Intercept form)
    b = (line1.point2.y - (Slope * line1.point2.x));

    //Displaying all Outputs
    printf("Slope: %.1f\n", Slope);
    printf("Midpoint: (%.1f , %.1f)\n", Midpoint_x, Midpoint_y);
    printf("Distance: %.1f\n", Distance);
    printf("Point-Intercept Form: y = %.1fx + %.1f", Slope, b);

}
