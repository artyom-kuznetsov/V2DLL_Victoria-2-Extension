// FUN_009e3d60 @ 009e3d60 body=[[009e3d60, 009e401b]]


void FUN_009e3d60(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(in_ECX + 0x474);
  *(undefined1 *)(in_ECX + 0x52) = 1;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x3dc) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x30))();
  }
  for (uVar3 = *(uint *)(in_ECX + 0x424);
      (*(uint *)(in_ECX + 0x424) <= uVar3 && (uVar3 < *(uint *)(in_ECX + 0x428)));
      uVar3 = uVar3 + 0x20) {
    (**(code **)(**(int **)(uVar3 + 0x1c) + 0x50))();
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x270) - *(int *)(in_ECX + 0x26c) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x26c) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x290) - *(int *)(in_ECX + 0x28c) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x28c) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x2d0) - *(int *)(in_ECX + 0x2cc) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2cc) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x434); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x34c) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x30))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x444); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x370) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x30))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x454); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x394) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x30))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x464); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    iVar4 = (**(code **)(*(int *)(in_ECX + 0x3b8) + 4))(iVar2);
    (**(code **)(*(int *)(iVar4 + 4) + 0x30))();
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x2b0) - *(int *)(in_ECX + 0x2ac) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2ac) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x2f0) - *(int *)(in_ECX + 0x2ec) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2ec) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x310) - *(int *)(in_ECX + 0x30c) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x30c) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x330) - *(int *)(in_ECX + 0x32c) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x32c) + iVar4 * 4) + 0x30))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x484); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x400) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x30))();
  }
  if (*(int **)(in_ECX + 0x248) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x248) + 0x30))();
  }
  return;
}

