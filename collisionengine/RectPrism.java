package collisionengine;


public class RectPrism extends ThreeDObject
{
    int height, width, length;

    
    RectPrism(int argHeight, int argWidth, int argLength)
    {
        super();
        height = argHeight;
        width = argWidth;
        length = argLength;
    }

    RectPrism()
    {
       // RectPrism(0,0,0);
    }
    @Override
    void buildSpace() {
        objectSpace = new Boolean[width] [height] [length];
        for(Boolean[][] twoD: objectSpace){
            for(Boolean[] oneD: twoD){
                for(Boolean elem: oneD){
                    elem = true;
                }
            }
        }
    }
}