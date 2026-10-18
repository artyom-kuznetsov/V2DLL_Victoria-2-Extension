// FUN_009e5450 @ 009e5450 body=[[009e5450, 009e5524] [009e5530, 009e5710]]


void FUN_009e5450(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  
  if (*(int *)(in_ECX + 0x230) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x230) + 0x78))(param_1);
  }
  local_c = 0;
  iVar2 = *(int *)(in_ECX + 600) - *(int *)(in_ECX + 0x254) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x254) + local_c * 4) + 0x78))(param_1);
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x278) - *(int *)(in_ECX + 0x274) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x274) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2b8) - *(int *)(in_ECX + 0x2b4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2b4) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x41c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x334) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x78))(param_1);
  }
  for (uVar4 = *(uint *)(in_ECX + 0x40c);
      (*(uint *)(in_ECX + 0x40c) <= uVar4 && (uVar4 < *(uint *)(in_ECX + 0x410)));
      uVar4 = uVar4 + 0x20) {
    (**(code **)(*(int *)(*(int *)(uVar4 + 0x1c) + 0x18) + 0x78))(param_1);
  }
  for (iVar2 = *(int *)(in_ECX + 0x42c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x358) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x78))(param_1);
  }
  for (iVar2 = *(int *)(in_ECX + 0x43c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x37c) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x78))(param_1);
  }
  for (iVar2 = *(int *)(in_ECX + 0x44c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    iVar3 = (**(code **)(*(int *)(in_ECX + 0x3a0) + 4))(iVar2);
    (**(code **)(*(int *)(iVar3 + 4) + 0x78))(param_1);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2d8) - *(int *)(in_ECX + 0x2d4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2d4) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x298) - *(int *)(in_ECX + 0x294) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x294) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2f8) - *(int *)(in_ECX + 0x2f4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2f4) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x318) - *(int *)(in_ECX + 0x314) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x314) + iVar3 * 4) + 0x78))(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x45c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x3c4) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x78))(param_1);
  }
  return;
}

