// FUN_0088eed0 @ 0088eed0 body=[[0088eed0, 0088efbe]]


void FUN_0088eed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (param_2 == 0xc) {
    iVar2 = FUN_00aaf0c5(param_1 + 0x24);
    *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + iVar2;
    iVar1 = *(int *)(in_ECX + 0x28);
    piVar3 = (int *)FUN_00aae9af(0x10);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = iVar2;
      piVar3[1] = iVar1;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x2c);
    *(int **)(in_ECX + 0x28) = piVar3;
    *(int *)(in_ECX + 0x2c) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(in_ECX + 0x24) = piVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar3;
    }
    piVar3 = (int *)FUN_00aae9af(0x20);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      *(undefined1 *)(piVar3 + 5) = 0;
      piVar3[1] = 0x18d;
      *piVar3 = (int)CEffect::vftable;
      *(undefined2 *)(piVar3 + 7) = 0;
    }
    (**(code **)(*piVar3 + 0xc))(param_1);
    iVar1 = *(int *)(in_ECX + 0xc);
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = piVar3;
      puVar4[1] = iVar1;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x10);
    *(undefined4 **)(in_ECX + 0xc) = puVar4;
    *(int *)(in_ECX + 0x10) = iVar2 + 1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar4;
      return;
    }
    *(undefined4 **)(in_ECX + 8) = puVar4;
  }
  return;
}

