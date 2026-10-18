// FUN_00995c50 @ 00995c50 body=[[00995c50, 00995e57] [00995e5b, 00995eaf] [00995eb9, 00995eda] [00995ede, 00995f26] [00995f2a, 00995f5a] [00995f5e, 00995f9d] [00995fa1, 00995fef] [00995ff3, 00996014] [00996018, 00996039] [0099603d, 00996068] [00996072, 00996098] [009960a2, 009960c3] [009960c7, 009960eb] [009960f5, 00996116] [0099611a, 0099613e] [00996148, 00996169] [0099616d, 009961eb] [009961ef, 00996204] [00996208, 00996219] [00996220, 00996228] [00996232, 0099624a] [00996254, 00996273]]


void FUN_00995c50(void)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined **local_7c [18];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b57d11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e38324;
  in_ECX[1] = &PTR_LAB_00e38338;
  local_8 = 0x1b;
  if ((undefined4 *)in_ECX[0x1af5a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1af5a])(1);
  }
  piVar4 = (int *)in_ECX[0x46];
  while (piVar4 != (int *)0x0) {
    piVar3 = (int *)piVar4[2];
    piVar1 = (int *)*piVar4;
    piVar4 = piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(1);
    }
  }
  piVar4 = (int *)in_ECX[0x2e];
  iVar2 = in_ECX[0x2f] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x24))(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  FUN_0099e720(in_ECX + 0x22);
  FUN_0099e720(in_ECX + 0x25);
  FUN_0099e720(in_ECX + 0x28);
  FUN_0099e720(in_ECX + 0x1af3c);
  FUN_0099e720(in_ECX + 0x2b);
  FUN_0057afc0(in_ECX + 0x2b);
  FUN_0057afc0(in_ECX + 0x28);
  FUN_0057afc0(in_ECX + 0x1af3c);
  FUN_0057afc0(in_ECX + 0x22);
  FUN_0057afc0(in_ECX + 0x25);
  _Dst = (void *)in_ECX[0x2e];
  if (_Dst != (void *)in_ECX[0x2f]) {
    local_14 = (int *)0x0;
    FID_conflict__memcpy(_Dst,(void *)in_ECX[0x2f],0);
    in_ECX[0x2f] = (int)local_14 + (int)_Dst;
  }
  FUN_0099d060();
  if (in_ECX[0x1af21] != 0) {
    FUN_00996280();
  }
  local_8._0_1_ = 0x1c;
  local_14 = (int *)0x0;
  if (DAT_0131cb30 != (undefined4 *)0x0) {
    (**(code **)*DAT_0131cb30)(1);
  }
  local_8._0_1_ = 0x1b;
  DAT_0131cb30 = (undefined4 *)0x0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("graphics.cpp",0xc);
  local_8._0_1_ = 0x1d;
  FUN_004015b0(local_34,0x2af,0x302);
  local_8._0_1_ = 0x1e;
  FUN_00987d20();
  local_8._0_1_ = 0x1d;
  FUN_00987ac0(local_7c);
  local_7c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_7c);
  local_8._0_1_ = 0x1b;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_009bd5b0(in_ECX + 0x56);
  FUN_009bc400(in_ECX + 0x56);
  (**(code **)(*(int *)in_ECX[0x1ae72] + 8))((int *)in_ECX[0x1ae72]);
  (**(code **)(*(int *)in_ECX[0x19] + 8))((int *)in_ECX[0x19]);
  (**(code **)(*(int *)in_ECX[0x18] + 8))((int *)in_ECX[0x18]);
  in_ECX[0x19] = 0;
  in_ECX[0x18] = 0;
  DAT_01258a74 = 0;
  if (in_ECX[0x1af56] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1af56]);
  }
  in_ECX[0x1af56] = 0;
  in_ECX[0x1af57] = 0;
  in_ECX[0x1af58] = 0;
  if (in_ECX[0x1af52] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1af52]);
  }
  in_ECX[0x1af52] = 0;
  in_ECX[0x1af53] = 0;
  in_ECX[0x1af54] = 0;
  local_8._0_1_ = 0x18;
  FUN_009becc0();
  FUN_0057afc0(in_ECX + 0x1af3c);
  FUN_00aaea59(in_ECX[0x1af3e]);
  if (in_ECX[0x1af24] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1af24]);
  }
  in_ECX[0x1af24] = 0;
  in_ECX[0x1af25] = 0;
  in_ECX[0x1af26] = 0;
  in_ECX[0x1aec3] = &PTR_FUN_00e38350;
  if (0xf < (uint)in_ECX[0x1af0a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1af05]);
  }
  in_ECX[0x1af0a] = 0xf;
  in_ECX[0x1af09] = 0;
  *(undefined1 *)(in_ECX + 0x1af05) = 0;
  FUN_009f8f70();
  in_ECX[0x1ae78] = &PTR_FUN_00e38350;
  if (0xf < (uint)in_ECX[0x1aebf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1aeba]);
  }
  in_ECX[0x1aebf] = 0xf;
  in_ECX[0x1aebe] = 0;
  *(undefined1 *)(in_ECX + 0x1aeba) = 0;
  FUN_009f8f70();
  local_8._0_1_ = 0x13;
  FUN_00a44f20();
  local_8 = CONCAT31(local_8._1_3_,0x12);
  FUN_009bc360();
  if (in_ECX[0x52] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x52]);
  }
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  if (in_ECX[0x4e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4e]);
  }
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  if (in_ECX[0x4a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4a]);
  }
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  if (in_ECX[0x46] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x46]);
  }
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  if (in_ECX[0x42] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x42]);
  }
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  if (in_ECX[0x3e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  if (in_ECX[0x3a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3a]);
  }
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  if (in_ECX[0x36] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x36]);
  }
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  if (in_ECX[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x32]);
  }
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  if (in_ECX[0x2e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2e]);
  }
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  FUN_0057afc0(in_ECX + 0x2b);
  FUN_00aaea59(in_ECX[0x2d]);
  FUN_0057afc0(in_ECX + 0x28);
  FUN_00aaea59(in_ECX[0x2a]);
  FUN_0057afc0(in_ECX + 0x25);
  FUN_00aaea59(in_ECX[0x27]);
  FUN_0057afc0(in_ECX + 0x22);
  FUN_00aaea59(in_ECX[0x24]);
  if (in_ECX[0x14] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x14]);
  }
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  if (in_ECX[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x10]);
  }
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  if (in_ECX[10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  if (in_ECX[6] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[6]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00e38318;
  ExceptionList = local_10;
  return;
}

