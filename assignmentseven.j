.class public assignmentseven
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static environmentObject [[[I;
.field private static cubeobject [I;
.field private static cubeobjectcenter [I;

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
	putstatic        assignmentseven/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        assignmentseven/_standardIn LPascalTextIn;

	iload 100
	iload 100
	iload 100
	multianewarray [[[I 3
	putstatic assignmentseven/environmentObject [[[I


; cubecubeobject=[height=1,width=1,length=2]

	iload 3
	newarray int
	putstatic assignmentseven/cubeobject [I

	getstatic assignmentseven/cubeobject [I
	ldc	0
	ldc	1
	iastore

	getstatic assignmentseven/cubeobject [I
	ldc	1
	ldc	1
	iastore

	getstatic assignmentseven/cubeobject [I
	ldc	2
	ldc	2
	iastore


; putnenvcubeobject

	getstatic	assignmentseven/cubeobjectcenter
	ldc	0
	ldc	0
	iastore

	getstatic	assignmentseven/cubeobjectcenter
	ldc	1
	ldc	0
	iastore

	getstatic	assignmentseven/cubeobjectcenter
	ldc	2
	ldc	0
	iastore

	getstatic	assignmentseven/environmentObject
	ldc 50
	aaload
	ldc 50
	aaload
	ldc 50
	ldc	0
	aastore

; 

getstatic	java/lang/System/out Ljava/io/PrintStream;
ldc	"Results of Simulation:	cubeobject at x=%d, y=%d, z=%d"
iconst_3
anewarray     java/lang/Object
dup
ldc 0
getstatic	cubeobject/center [I
ldc 0
iaload
invokestatic  java/lang/Integer/valueOf(I)Ljava/lang/Integer;
aastore
dup
ldc 1
getstatic	cubeobject/center [I
ldc 1
iaload
invokestatic  java/lang/Integer/valueOf(I)Ljava/lang/Integer;
aastore
dup
ldc 2
getstatic	cubeobject/center [I
ldc 2
iaload
invokestatic  java/lang/Integer/valueOf(I)Ljava/lang/Integer;
aastore
dup
invokevirtual java/io/PrintStream/printf(Ljava/lang/String;
[Ljava/lang/Object;) Ljava/io/PrintStream;
pop


	getstatic     assignmentseven/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
