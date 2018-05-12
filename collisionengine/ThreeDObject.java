package collisionengine;

abstract class ThreeDObject
    {
        public ThreeDObject()
        {
            initCenter(new Point());
            initVelocity(new Velocity());
        }
        public ThreeDObject(Point argcenter) 
        { 
            initCenter(argcenter); 
            initVelocity(new Velocity());
        }
        
        public ThreeDObject(Velocity argvel)
        {
            initVelocity(argvel);
            initCenter(new Point());
        }
        public ThreeDObject(Point argcenter, Velocity argvel)
        {
            initVelocity(argvel);
            initCenter(argcenter); 
        }
        public void initCenter(Point argcenter)
        {
            center = new Point(argcenter.x, argcenter.y, argcenter.z);
        }
        public void initVelocity(Velocity argvel)
        {
            objvelocity = new Velocity( argvel.dx, argvel.dy, argvel.dz);
        }
        public void putInEnvironment(Point argcenter) 
        {
            center.x = argcenter.x;
            center.y = argcenter.y;
            center.z = argcenter.z;
        }
        //abstract public void move(int argspeed, int argdirection);
        public void move(Point argdest, int argtime)
        {
            objvelocity.dx = (argdest.x - center.x)/argtime;
            objvelocity.dy = (argdest.y - center.y)/argtime;
            objvelocity.dz = (argdest.z - center.z)/argtime;
        }
        public void move(Velocity argvel)
        {
            objvelocity.dx = argvel.dx;
            objvelocity.dy = argvel.dy;
            objvelocity.dz = argvel.dz;
        }
        public void timestep()
        {
            center.x += objvelocity.dx;
            center.y += objvelocity.dy;
            center.z += objvelocity.dz;
        }
        abstract void buildSpace(); 

        Point center;
        //private int moveTime;
        Velocity objvelocity;
        Boolean[][][] objectSpace;
    }