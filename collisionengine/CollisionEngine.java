package collisionengine;

import java.lang.String;
import java.util.*;

public class CollisionEngine
{
    public CollisionEngine(int xdim, int ydim, int zdim)
    {
        environment = new int[xdim][ydim][zdim];
        collisionMap = new HashMap<Set<ThreeDObjects.ThreeDObject>, Integer>();
        numCollisions = 1;
    }
    int[][][] environment;
    int[] objectNumbers;
    String[] objectNames;
    ThreeDObjects ThreeDobjs = new ThreeDObjects();
    int numCollisions;
    Map<Set<ThreeDObjects.ThreeDObject>, Integer> collisionMap; 
    //hashtable of actions?

    public boolean detectCollisionAtPoint(ThreeDObjects.point destination)
    {
        return true;
    }
    
    public void moveObject(ThreeDObjects.ThreeDObject object)
    {
        
    }

    public void addCollision(ThreeDObjects.ThreeDObject object1, ThreeDObjects.ThreeDObject object2)
    {
        Set<ThreeDObjects.ThreeDObject> objlist = new HashSet<ThreeDObjects.ThreeDObject>();
        objlist.add(object1);
        objlist.add(object2);
        collisionMap.put(objlist, new Integer(numCollisions));
        numCollisions++;
    }

    public int getCollision(ThreeDObjects.ThreeDObject object1, ThreeDObjects.ThreeDObject object2)
    {
        Set<ThreeDObjects.ThreeDObject> objlist = new HashSet<ThreeDObjects.ThreeDObject>();                
        return collisionMap.get(objlist);
    }

    public void printStatus()
    {
        int x = environment.length;
        int y = environment[0].length;
        int z = environment[0][0].length;
        System.out.printf("Size of Envirnoment: x = %d, y = %d, z = %d\n", x, y,z);
    }
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