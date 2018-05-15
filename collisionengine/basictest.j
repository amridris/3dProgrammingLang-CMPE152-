.class public collisionengine/basictest
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static basicenvEngine Lcollisionengine/CollisionEngine;
.field private static xp I
.field private static yp I

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
	putstatic        collisionengine/basictest/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        collisionengine/basictest/_standardIn LPascalTextIn;

	new collisionengine/CollisionEngine
	dup
	ldc 100
	ldc 100
	ldc 100
	invokenonvirtual collisionengine/CollisionEngine/<init>(III)V
	putstatic	collisionengine/basictest/basicenvEngine Lcollisionengine/CollisionEngine;
	ldc	3
	putstatic	collisionengine/basictest/xp I

	ldc	4
	putstatic	collisionengine/basictest/yp I

	getstatic	collisionengine/basictest/xp I
	getstatic	collisionengine/basictest/yp I
	????
	putstatic	collisionengine/basictest/xp I

; intxp=3

	ldc	3
	putstatic	collisionengine/basictest/xp I


; intyp=4

	ldc	4
	putstatic	collisionengine/basictest/yp I


; xp=xp+yp

	getstatic	collisionengine/basictest/xp I
	getstatic	collisionengine/basictest/yp I
	????
	putstatic	collisionengine/basictest/xp I
	ldc	5
	putstatic	collisionengine/basictest/xp I

; xp=5

	ldc	5
	putstatic	collisionengine/basictest/xp I
	getstatic collisionengine/basictest/basicenvEngine Lcollisionengine/CollisionEngine;
	invokevirtual collisionengine/CollisionEngine/printStatus()V

	getstatic     collisionengine/basictest/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
