.class public basictest
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static basicenv [[[I
.field private static xp 
.field private static xpcenter [I

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
	putstatic        basictest/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        basictest/_standardIn LPascalTextIn;

	ldc 100
	ldc 100
	ldc 100
	multianewarray [[[I 3
	putstatic basictest/basicenv [[[I

	putstatic basictest/xp 

	putstatic basictest/xpcenter [I


; intxp=3

	putstatic basictest/xp 

	putstatic basictest/xpcenter [I


; pause

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Results of Simulation:
	cubeobject at x=%d, y=%d, z=%d"
	iconst_3
	anewarray java/lang/Object
	dup
	ldc 0
	getstatic	basictest/cubeobjectcenter [I
	ldc	0
	iaload
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc 1
	getstatic	basictest/cubeobjectcenter [I
	ldc	1
	iaload
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc 2
	getstatic	basictest/cubeobjectcenter [I
	ldc	2
	iaload
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
pop


	getstatic     basictest/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
