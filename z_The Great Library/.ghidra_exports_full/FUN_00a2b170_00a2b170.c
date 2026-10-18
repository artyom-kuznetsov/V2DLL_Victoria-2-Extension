// FUN_00a2b170 @ 00a2b170 body=[[00a2b170, 00a2b3be]]


void FUN_00a2b170(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piStack_50;
  undefined *puStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined *puStack_40;
  int *piStack_3c;
  
  if (*(int *)(in_ECX + 0xd8) == 0) {
    puStack_40 = (undefined *)0xa2b18c;
    FUN_00a2ac10();
  }
  piStack_3c = *(int **)(in_ECX + 0x94);
  if (piStack_3c != (int *)0x0) {
    puStack_40 = (undefined *)0xa2b1a4;
    (**(code **)(*piStack_3c + 8))();
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  piStack_44 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  puStack_40 = &DAT_00f07d20;
  piStack_48 = (int *)0xa2b1c4;
  piStack_3c = (undefined4 *)(in_ECX + 0x94);
  (**(code **)(*piStack_44 + 0x158))();
  piStack_48 = *(int **)(in_ECX + 0x98);
  if (piStack_48 != (int *)0x0) {
    puStack_4c = (undefined *)0xa2b1dc;
    (**(code **)(*piStack_48 + 8))();
    *(undefined4 *)(in_ECX + 0x98) = 0;
  }
  piStack_50 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  puStack_4c = &DAT_00f07d58;
  piStack_48 = (undefined4 *)(in_ECX + 0x98);
  (**(code **)(*piStack_50 + 0x158))();
  piVar1 = *(int **)(in_ECX + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  (**(code **)(*piVar1 + 0x158))(piVar1,&DAT_00f07cc8,(undefined4 *)(in_ECX + 0x9c));
  piVar1 = *(int **)(in_ECX + 0xa0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xa0) = 0;
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  (**(code **)(*piVar1 + 0x158))(piVar1,&DAT_00f07cf0,(undefined4 *)(in_ECX + 0xa0));
  if (*(int *)(in_ECX + 0x150) == 0) {
    if (*(int *)(in_ECX + 0x134) == 0) {
      FUN_00409350("avatar",6);
    }
    else {
      FUN_00408ed0(in_ECX + 0x124,0,0xffffffff);
    }
  }
  if (*(int *)(in_ECX + 0x134) == 0) {
    FUN_00409350("gfx\\FX\\avatar.fx",0x10);
  }
  FUN_00a2b3c0(in_ECX);
  if (*(int *)(in_ECX + 0xd8) != 0) {
    iVar2 = FUN_00ad3d30(*(int *)(in_ECX + 0xd8),1,1);
    piStack_50 = (int *)0x7f7fffff;
    puStack_4c = (undefined *)0x7f7fffff;
    piStack_48 = (int *)0x7f7fffff;
    piStack_44 = (int *)0xff7fffff;
    puStack_40 = (undefined *)0xff7fffff;
    piStack_3c = (int *)0xff7fffff;
    FUN_00ad0bf0(0,&piStack_50,1);
    *(ulonglong *)(in_ECX + 0xa4) = CONCAT44(puStack_4c,piStack_50);
    *(ulonglong *)(in_ECX + 0xb0) = CONCAT44(puStack_40,piStack_44);
    *(int **)(in_ECX + 0xac) = piStack_48;
    *(int **)(in_ECX + 0xb8) = piStack_3c;
    if (iVar2 != 0) {
      FUN_00ad0e50();
      (*(code *)PTR__free_00f01b10)(iVar2);
    }
  }
  return;
}

