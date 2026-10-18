// FUN_00ae7070 @ 00ae7070 body=[[00ae7070, 00ae70b0]]


void FUN_00ae7070(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10) + param_1 * 0x1c;
  if (*(uint *)(iVar1 + 8) < param_2) {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(*(undefined4 *)(iVar1 + 4),param_2,0,4,0,0,0);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    *(uint *)(iVar1 + 8) = param_2;
  }
  return;
}

