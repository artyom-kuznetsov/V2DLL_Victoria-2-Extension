// FUN_006ca8b0 @ 006ca8b0 body=[[006ca8b0, 006ca99c]]


void FUN_006ca8b0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_c;
  
  FUN_004010c0();
  if (((uint)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10)) % 4 == 0) &&
     (*(uint *)(in_ECX + 8) <= *(int *)(in_ECX + 0x10) + 4U >> 2)) {
    FUN_006cac60(1);
  }
  uVar1 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10);
  local_c = uVar1 >> 2;
  if (*(uint *)(in_ECX + 8) <= local_c) {
    local_c = local_c - *(int *)(in_ECX + 8);
  }
  if (*(int *)(*(int *)(in_ECX + 4) + local_c * 4) == 0) {
    uVar2 = _Allocate<>(4,0);
    *(undefined4 *)(*(int *)(in_ECX + 4) + local_c * 4) = uVar2;
  }
  FUN_006cb900(in_ECX + 0x14,*(int *)(*(int *)(in_ECX + 4) + local_c * 4) + (uVar1 % 4) * 4,param_1)
  ;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  return;
}

