.class public collisionengine/assignmentseven
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static environmentObjectEngine Lcollisionengine/CollisionEngine;
.field private static cubeobject Lcollisionengine/RectPrism;

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

; cubecubeobject=[height=1,width=1,length=2]

	new collisionengine/RectPrism
	dup
	ldc	1
	ldc	1
	ldc	2
	invokenonvirtual collisionengine/RectPrism/<init>(III)V
	putstatic collisionengine/assignmentseven/cubeobject Lcollisionengine/RectPrism;


; putnenvcubeobject


; wait10

	ldc	10
	getstatic collisionengine/assignmentseven/environmentObjectEngine Lcollisionengine/CollisionEngine;
	invokevirtual collisionengine/CollisionEngine/printStatus()V

	getstatic     collisionengine/assignmentseven/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
