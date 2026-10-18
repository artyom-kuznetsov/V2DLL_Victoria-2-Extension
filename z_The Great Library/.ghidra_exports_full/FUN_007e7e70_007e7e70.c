// FUN_007e7e70 @ 007e7e70 body=[[007e7e70, 007e7f27] [007e7f30, 007e7fb7] [007e7fbb, 007e7fe7] [007e7feb, 007e803e] [007e8042, 007e805c]]


void FUN_007e7e70(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ed16;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CHoiAvatar::vftable;
  local_8 = 1;
  if (in_ECX[0x49] != 0) {
    FUN_009962f0(in_ECX[0x46]);
  }
  in_ECX[0x49] = 0;
  if (in_ECX[0x4b] != 0) {
    FUN_009962f0(in_ECX[0x46]);
  }
  in_ECX[0x4b] = 0;
  if (in_ECX[0x4a] != 0) {
    FUN_009962f0(in_ECX[0x46]);
  }
  in_ECX[0x4a] = 0;
  local_14 = 0;
  if (0 < (int)(in_ECX[0x4d] - in_ECX[0x4c] & 0xfffffffc)) {
    do {
      if (*(int *)(in_ECX[0x4c] + local_14 * 4) != 0) {
        FUN_009962f0(in_ECX[0x46]);
        *(undefined4 *)(in_ECX[0x4c] + local_14 * 4) = 0;
      }
      local_14 = local_14 + 1;
    } while (local_14 < (int)(in_ECX[0x4d] - in_ECX[0x4c]) >> 2);
  }
  if ((int *)in_ECX[0x50] != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)in_ECX[0x50] + 0x44))();
    FUN_009962f0(uVar2);
  }
  in_ECX[0x50] = 0;
  if (in_ECX[0x4c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4c]);
  }
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  *in_ECX = CSmallAvatarBase::vftable;
  if (0xf < (uint)in_ECX[0x43]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  DAT_01258ac4 = DAT_01258ac4 + -1;
  in_ECX[0x43] = 0xf;
  in_ECX[0x42] = 0;
  *(undefined1 *)(in_ECX + 0x3e) = 0;
  *in_ECX = &PTR_FUN_00e3d250;
  FUN_009f8fd0();
  for (iVar1 = in_ECX[0x37]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd8)) {
    *(undefined4 *)(iVar1 + 0xe4) = 0;
  }
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

