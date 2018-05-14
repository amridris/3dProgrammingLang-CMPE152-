.class public collisionengine/assignmentseven
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static environmentObjectEngine Lcollisionengine/CollisionEngine;
.field private static timetomovecube I
.field private static pointObjectOne Lcollisionengine/Point;
.field private static pointObjectTwo Lcollisionengine/Point;
.field private static cubeobject Lcollisionengine/RectPrism;
.field private static sphereobject Lcollisionengine/Sphere;

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        collisionengine/assignmentseven/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        collisionengine/assignmentseven/_standardIn LPascalTextIn;

	new collisionengine/CollisionEngine
	dup
	ldc 100
	ldc 100
	ldc 100
	invokenonvirtual collisionengine/CollisionEngine/<init>(III)V
	putstatic	collisionengine/assignmentseven/environmentObjectEngine Lcollisionengine/CollisionEngine;

; inttimetomovecube=2

	ldc	2
	putstatic	collisionengine/assignmentseven/timetomovecube I


; pointpointObjectOne=[x=0,y=0,z=0]

	new collisionengine/Point
	dup
	ldc	0
	ldc	0
	ldc	0
	invokenonvirtual collisionengine/Point/<init>(III)V
	putstatic collisionengine/assignmentseven/pointObjectOne Lcollisionengine/Point;


; pointpointObjectTwo=[x=10,y=0,z=0]

	new collisionengine/Point
	dup
	ldc	10
	ldc	0
	ldc	0
	invokenonvirtual collisionengine/Point/<init>(III)V
	putstatic collisionengine/assignmentseven/pointObjectTwo Lcollisionengine/Point;


; cubecubeobject=[height=1,width=1,length=2]

	new collisionengine/RectPrism
	dup
	ldc	1
	ldc	1
	ldc	2
	invokenonvirtual collisionengine/RectPrism/<init>(III)V
	dup
	putstatic collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;
	ldc "cubeobject"
	invokevirtual collisionengine/RectPrism/setName(Ljava/lang/String;)V


; spheresphereobject=[radius=2]

	new collisionengine/Sphere
	dup
	ldc	2
	invokenonvirtual collisionengine/Sphere/<init>(I)V
	dup
	putstatic collisionengine/assignmentseven/sphereobject Lcollisionengine/Sphere;
	ldc "sphereobject"
	invokevirtual collisionengine/Sphere/setName(Ljava/lang/String;)V


; putnenvcubeobjectpointObjectOne

	getstatic collisionengine/assignmentseven/environmentObjectEngine Lcollisionengine/CollisionEngine;
	getstatic collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;
	getstatic collisionengine/assignmentseven/pointObjectOne Lcollisionengine/Point;
	invokevirtual collisionengine/CollisionEngine/addObject(Lcollisionengine/ThreeDObject;Lcollisionengine/Point;)V

; putnenvsphereobjectpointObjectTwo

	getstatic collisionengine/assignmentseven/environmentObjectEngine Lcollisionengine/CollisionEngine;
	getstatic collisionengine/assignmentseven/sphereobject Lcollisionengine/Sphere;
	getstatic collisionengine/assignmentseven/pointObjectTwo Lcollisionengine/Point;
	invokevirtual collisionengine/CollisionEngine/addObject(Lcollisionengine/ThreeDObject;Lcollisionengine/Point;)V

; cubeobject~R5

	getstatic collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;
	ldc	5
	invokevirtual collisionengine/ThreeDObject.rotate(I)V

; movecubeobjecttopointObjectTwointimetomovecube

	getstatic collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;
	getstatic collisionengine/assignmentseven/pointObjectTwo Lcollisionengine/Point;
	getstatic	collisionengine/assignmentseven/timetomovecube I
	invokevirtual collisionengine/ThreeDObject.move(Lcollisionengine/Point;I)V

; waitcubeobject.dx

	getstatic	collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;

	invokevirtual collisionengine/RectPrism.getdx()I
	getstatic collisionengine/assignmentseven/environmentObjectEngine Lcollisionengine/CollisionEngine;
	invokevirtual collisionengine/CollisionEngine/printStatus()V

	getstatic     collisionengine/assignmentseven/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
