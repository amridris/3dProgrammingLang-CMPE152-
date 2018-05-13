package collisionengine;

import java.lang.String;
import java.util.*;

public class CollisionEngine
{
    public CollisionEngine(int xdim, int ydim, int zdim)
    {
        environment = new int[xdim][ydim][zdim];
        collisionMap = new HashMap<Set<ThreeDObject>, Integer>();
        numCollisions = 1;
        engineObjects = new LinkedList<ThreeDObject>();
    }
    int[][][] environment;
    int[] objectNumbers;
    String[] objectNames;
    int numCollisions = 0;
    Map<Set<ThreeDObject>, Integer> collisionMap; 
    List<ThreeDObject> engineObjects;
    //hashtable of actions?

    public int[] timestep()
    {
        for(ThreeDObject obj: engineObjects){
            obj.timestep();
        }
        return detectCollisions();
        // handleCollisions();
    }

    public int[] detectCollisions()
    {
        int[] collisions = new int[numCollisions+1];
        //actually detect collisions
        return collisions;
    }

    public void handleCollisions()
    {

    }

    public void addObject(ThreeDObject argobj, Point argPoint)
    {
        argobj.putInEnvironment(argPoint);
        engineObjects.add(argobj);
    }

    public boolean detectCollisionAtPoint(Point destination)
    {
        return true;
    }
    
    public void moveObject(ThreeDObject object)
    {
        
    }

    public void addCollision(ThreeDObject object1, ThreeDObject object2)
    {
        Set<ThreeDObject> objlist = new HashSet<ThreeDObject>();
        objlist.add(object1);
        objlist.add(object2);
        collisionMap.put(objlist, new Integer(numCollisions));
        numCollisions++;
    }

    public int getCollision(ThreeDObject object1, ThreeDObject object2)
    {
        Set<ThreeDObject> objlist = new HashSet<ThreeDObject>();                
        return collisionMap.get(objlist);
    }

    public void printStatus()
    {
        int x = environment.length;
        int y = environment[0].length;
        int z = environment[0][0].length;
        System.out.printf("Size of Environment: x = %d, y = %d, z = %d\n\n", x, y,z);
        System.out.printf("Current Object Status:\n");
        for(ThreeDObject obj: engineObjects){
            System.out.print(obj.name);
            System.out.print(" center is at: ");
            obj.printLocation();
            System.out.printf(" and velocity is: dx=%d, dy=%d, dz=%d", obj.objvelocity.dx, obj.objvelocity.dy, obj.objvelocity.dz);
            System.out.println();
        }
    }

    public ThreeDObject createObject(String argtype, HashMap<String, Integer> argmap)
    {  
        //String type = argmap.get("type");
       ThreeDObject obj;
        if(argtype == "cube"){

            obj = new RectPrism(argmap.get("height"), 
                                argmap.get("width"),
                                argmap.get("length"));
        }
        else {
            obj = new RectPrism(0,0,0);
        }
        return obj;
    }

    public static void main(String[] args) {
        CollisionEngine col = new CollisionEngine(100,100,100);
        Point p = new Point(10,0,0);
        RectPrism rect = new RectPrism(1,2,3);
        col.addObject(rect, p);
        System.out.println(rect.height);
    }
    //map has type, 
/*
    public static void main(String[] args) {
        
        System.out.println("CollisionEngine ... ");
        ThreeDObjects tdobjs = new ThreeDObjects();
        ThreeDObjects.rectPrism r = tdobjs.new rectPrism(1, 2, 3);
        r.move(new ThreeDObjects.point(1,1,1), 1);
        System.out.println(r.objvelocity.dx);
    }
*/

   
   
}