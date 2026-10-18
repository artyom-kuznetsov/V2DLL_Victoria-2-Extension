// FUN_0078aae0 @ 0078aae0 body=[[0078aae0, 0078ac3b]]


void FUN_0078aae0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  }
  iVar2 = FUN_00967f50();
  if (iVar2 != 0) {
    iVar2 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x60) < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_009c1d40();
    }
    *(int **)(in_ECX + 0x5c) = piVar3;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x24))();
      if (cVar1 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xa0) + 0x34))();
        piVar4 = *(int **)(in_ECX + 0x9c);
      }
      else {
        (**(code **)(**(int **)(in_ECX + 0x9c) + 0x34))();
        piVar4 = *(int **)(in_ECX + 0xa0);
      }
      (**(code **)(*piVar4 + 0x38))();
      if (piVar3[0xc] != 0) {
        (**(code **)(**(int **)(in_ECX + 0x88) + 0x48))
                  (*(undefined4 *)(*(int *)(piVar3[0xc] + 0x68) + 0x38));
        iVar2 = FUN_00967f50();
        if (iVar2 != 0) {
          (**(code **)(**(int **)(in_ECX + 0xb4) + 0x108))();
          (**(code **)(**(int **)(in_ECX + 0xb4) + 0x34))();
          iVar2 = FUN_00967f50();
          (**(code **)(**(int **)(in_ECX + 0xb4) + 0x48))
                    (*(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x128));
          return;
        }
        (**(code **)(**(int **)(in_ECX + 0xb4) + 0x104))();
        return;
      }
      (**(code **)(**(int **)(in_ECX + 0xb4) + 0x104))();
      (**(code **)(**(int **)(in_ECX + 0x88) + 0x48))(0);
      (**(code **)(**(int **)(in_ECX + 0x88) + 0x38))();
    }
  }
  return;
}

