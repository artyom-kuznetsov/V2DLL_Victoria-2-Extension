// FUN_00a4e030 @ 00a4e030 body=[[00a4e030, 00a4e258]]


void FUN_00a4e030(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar1 = FUN_009be510(param_1 + 0x6bcfc,in_ECX + 0x5c,in_ECX + 0x5c,*(undefined4 *)(param_1 + 100))
  ;
  *(int *)(in_ECX + 0xbc) = iVar1;
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar1 * 4);
  }
  *(int **)(in_ECX + 0xa4) = piVar2;
  uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(in_ECX + 0xa8) = uVar3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0xa4) + 0x24))(*(int **)(in_ECX + 0xa4),0,"CurrentState")
  ;
  *(undefined4 *)(in_ECX + 0xac) = uVar3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0xa4) + 0x34))(*(int **)(in_ECX + 0xa4),&DAT_00e19be0);
  *(undefined4 *)(in_ECX + 0xb0) = uVar3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0xa4) + 0x34))(*(int **)(in_ECX + 0xa4),"ScrollTech");
  *(undefined4 *)(in_ECX + 0xb4) = uVar3;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xa4) + 0x24))(*(int **)(in_ECX + 0xa4),0,&DAT_00e0bce4);
  uVar3 = DAT_00f092fc;
  *(undefined4 *)(in_ECX + 0xb8) = uVar4;
  *(undefined4 *)(in_ECX + 0x11c) = uVar3;
  *(undefined4 *)(in_ECX + 0x118) = uVar3;
  if (*(int *)(in_ECX + 0x88) != 0) {
    uVar3 = FUN_009bcbf0(in_ECX + 0x78,1);
    *(undefined4 *)(in_ECX + 0x94) = uVar3;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x118);
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = uVar3;
  if (*(char *)(in_ECX + 0xc0) == '\0') {
    *(undefined4 *)(in_ECX + 0xe4) = uVar3;
    uVar3 = *(undefined4 *)(in_ECX + 0x11c);
    *(undefined4 *)(in_ECX + 0xf8) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *(undefined4 *)(in_ECX + 0xfc) = uVar3;
  }
  else {
    *(undefined4 *)(in_ECX + 0xf8) = uVar3;
    uVar3 = *(undefined4 *)(in_ECX + 0x11c);
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = uVar3;
    *(undefined4 *)(in_ECX + 0xfc) = 0;
  }
  *(undefined4 *)(in_ECX + 0x110) = uVar3;
  *(undefined8 *)(in_ECX + 0xc4) = 0;
  *(ulonglong *)(in_ECX + 0xd8) = (ulonglong)(uint)(float)*(int *)(in_ECX + 0x9c) << 0x20;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(ulonglong *)(in_ECX + 0xec) = (ulonglong)(uint)(float)*(int *)(in_ECX + 0x98);
  *(ulonglong *)(in_ECX + 0x100) =
       CONCAT44((float)*(int *)(in_ECX + 0x9c),(float)*(int *)(in_ECX + 0x98));
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  return;
}

