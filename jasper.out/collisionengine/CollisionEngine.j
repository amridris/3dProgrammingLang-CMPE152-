.source                  CollisionEngine.java
.class                   public collisionengine/CollisionEngine
.super                   java/lang/Object

.field                   environment [[[I
.field                   objectNumbers [I
.field                   objectNames [Ljava/lang/String;
.field                   ThreeDobjs Lcollisionengine/ThreeDObjects;

.method                  public <init>(III)V
   .limit stack          4
   .limit locals         4
   .line                 8
   aload_0               
   invokespecial         java/lang/Object/<init>()V
   .line                 14
   aload_0               
   new                   collisionengine/ThreeDObjects
   dup                   
   invokespecial         collisionengine/ThreeDObjects/<init>()V
   putfield              collisionengine/CollisionEngine/ThreeDobjs Lcollisionengine/ThreeDObjects;
   .line                 9
   aload_0               
   iload_1               
   iload_2               
   iload_3               
   multianewarray        [[[I 3
   putfield              collisionengine/CollisionEngine/environment [[[I
   .line                 10
   return                
.end method              

.method                  public detectCollisionAtPoint(Lcollisionengine/ThreeDObjects$point;)Z
   .limit stack          1
   .limit locals         2
   .line                 19
   iconst_1              
   ireturn               
.end method              

.method                  public moveObject(Lcollisionengine/ThreeDObjects$ThreeDObject;)V
   .limit stack          0
   .limit locals         2
   .line                 25
   return                
.end method              

.method                  public static main([Ljava/lang/String;)V
   .limit stack          6
   .limit locals         3
   .line                 29
   getstatic             java/lang/System/out Ljava/io/PrintStream;
   ldc                   "CollisionEngine ... "
   invokevirtual         java/io/PrintStream/println(Ljava/lang/String;)V
   .line                 30
   new                   collisionengine/ThreeDObjects
   dup                   
   invokespecial         collisionengine/ThreeDObjects/<init>()V
   astore_1              
   .line                 31
   new                   collisionengine/ThreeDObjects$rectPrism
   dup                   
   aload_1               
   dup                   
   invokevirtual         java/lang/Object/getClass()Ljava/lang/Class;
   pop                   
   iconst_1              
   iconst_2              
   iconst_3              
   invokespecial         collisionengine/ThreeDObjects$rectPrism/<init>(Lcollisionengine/ThreeDObjects;III)V
   astore_2              
   .line                 32
   aload_2               
   new                   collisionengine/ThreeDObjects$point
   dup                   
   iconst_1              
   iconst_1              
   iconst_1              
   invokespecial         collisionengine/ThreeDObjects$point/<init>(III)V
   iconst_1              
   invokevirtual         collisionengine/ThreeDObjects$rectPrism/move(Lcollisionengine/ThreeDObjects$point;I)V
   .line                 33
   getstatic             java/lang/System/out Ljava/io/PrintStream;
   aload_2               
   getfield              collisionengine/ThreeDObjects$rectPrism/objvelocity Lcollisionengine/ThreeDObjects$velocity;
   getfield              collisionengine/ThreeDObjects$velocity/dx I
   invokevirtual         java/io/PrintStream/println(I)V
   .line                 34
   return                
.end method              

