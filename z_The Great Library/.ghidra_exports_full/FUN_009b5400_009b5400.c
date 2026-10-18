// FUN_009b5400 @ 009b5400 body=[[009b5400, 009b57b8] [009b57bc, 009b57dc] [009b57e0, 009b57fa] [009b57fe, 009b5818] [009b581c, 009b5839] [009b583d, 009b5851]]


undefined4 * FUN_009b5400(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  uint in_stack_0000002c;
  undefined4 in_stack_0000003c;
  uint in_stack_00000040;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  undefined4 in_stack_0000005c;
  uint in_stack_00000060;
  undefined4 in_stack_00000068;
  uint in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 *in_stack_0000008c;
  undefined1 *in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined1 auStack_b8 [12];
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [12];
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 uStack_80;
  undefined4 uStack_70;
  undefined4 local_6c;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint *puStack_58;
  char *pcStack_54;
  int *piStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f3e1;
  local_10 = ExceptionList;
  local_8 = 3;
  puStack_48 = (undefined4 *)param_3;
  puStack_4c = param_1;
  piStack_50 = (int *)0x9b5432;
  ExceptionList = &local_10;
  FUN_009a6a30();
  *param_1 = &PTR_FUN_00e397c0;
  puStack_48 = &stack0x0000002c;
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_4c = (undefined4 *)0x9b544e;
  puStack_48 = (undefined4 *)FUN_00973bd0();
  if (puStack_48 == (undefined4 *)0x0) {
    puStack_48 = &stack0x0000002c;
    puStack_4c = (undefined4 *)0x9b5463;
    puStack_48 = (undefined4 *)FUN_00973bd0();
  }
  puStack_4c = (undefined4 *)(param_3 + 0x7c);
  piVar2 = param_1 + 0x15;
  pcStack_54 = (char *)0x9b5474;
  piStack_50 = piVar2;
  FUN_009f4bc0();
  *param_1 = &PTR_FUN_00e39878;
  *piVar2 = (int)&PTR_LAB_00e39938;
  param_1[0x43] = param_2;
  param_1[0x4b] = 0xf;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x58] = in_stack_00000084;
  param_1[0x5b] = 0;
  param_1[0x5c] = 1;
  param_1[0x5d] = 0;
  param_1[0x5e] = in_stack_00000090;
  param_1[0x5f] = in_stack_0000009c;
  param_1[0x60] = in_stack_000000a0;
  param_1[0x61] = *in_stack_0000008c;
  param_1[0x62] = in_stack_0000008c[1];
  param_1[99] = in_stack_00000088;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  local_8._0_1_ = 9;
  puStack_48 = (undefined4 *)0x0;
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  puStack_4c = (undefined4 *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x69) = 0;
  piStack_50 = (int *)0x9b5556;
  FUN_00409350();
  local_8._0_1_ = 10;
  puStack_48 = (undefined4 *)0x0;
  param_1[0x75] = 0xf;
  param_1[0x74] = 0;
  puStack_4c = (undefined4 *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x70) = 0;
  piStack_50 = (int *)0x9b5577;
  FUN_00409350();
  puStack_48 = (undefined4 *)0x0;
  local_8._0_1_ = 0xb;
  puStack_4c = (undefined4 *)&DAT_00ded94d;
  param_1[0x3d] = 0xfa;
  piStack_50 = (int *)0x9b5593;
  FUN_00409350();
  pcVar1 = *(code **)(*piVar2 + 0x54);
  puStack_48 = &stack0x0000004c;
  param_1[0x23] = 0;
  *(undefined1 *)((int)param_1 + 0x109) = 1;
  puStack_4c = (undefined4 *)0x9b55b1;
  (*pcVar1)();
  puStack_4c = (undefined4 *)0xffffffff;
  piStack_50 = (int *)0x0;
  pcStack_54 = (char *)&stack0x0000002c;
  puStack_58 = (uint *)0x9b55c3;
  FUN_00408ed0();
  puStack_4c = (undefined4 *)0xffffffff;
  piStack_50 = (int *)0x0;
  pcStack_54 = (char *)&param_4;
  puStack_58 = (uint *)0x9b55d5;
  FUN_00408ed0();
  param_1[0x57] = in_stack_00000048;
  param_1[0x56] = in_stack_00000048;
  param_1[0x55] = in_stack_00000098;
  param_1[0x54] = in_stack_00000094;
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(short *)(param_1 + 0x27) = (short)in_stack_00000084 + (short)in_stack_00000094 * -2;
  puStack_4c = (undefined4 *)in_stack_00000098;
  piStack_50 = (int *)in_stack_00000094;
  pcStack_54 = (char *)0x0;
  *(short *)((int)param_1 + 0x9e) = in_stack_00000084._2_2_ + (short)in_stack_00000098 * -2;
  uStack_60 = (uint)*(ushort *)((int)param_1 + 0x162);
  uStack_64 = (uint)*(ushort *)(param_1 + 0x58);
  puStack_58 = (uint *)0x0;
  uStack_5c = in_stack_00000088;
  local_84 = 0xffffffff;
  local_88 = 0;
  puStack_8c = &param_4;
  local_6c = 0xf;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_90 = 0x9b566b;
  FUN_00408ed0();
  in_stack_00000090 = auStack_9c;
  local_8._0_1_ = 0xc;
  local_a0 = 0xffffffff;
  local_a4 = 0;
  puStack_a8 = &stack0x0000002c;
  local_88 = 0xf;
  puStack_8c = (undefined4 *)0x0;
  auStack_9c[0] = 0;
  uStack_ac = 0x9b568e;
  FUN_00408ed0();
  in_stack_0000008c = (undefined4 *)auStack_b8;
  local_8._0_1_ = 0xd;
  local_a4 = 0xf;
  puStack_a8 = (undefined4 *)0x0;
  auStack_b8[0] = 0;
  FUN_00408ed0(&stack0x0000004c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar2 = (int *)FUN_009966a0(&stack0x00000068);
  puStack_4c = (undefined4 *)param_1[0x58];
  param_1[0x44] = piVar2;
  piStack_50 = (int *)0x9b56da;
  (**(code **)(*piVar2 + 0x100))();
  piStack_50 = (int *)in_stack_00000048;
  pcStack_54 = (char *)0x9b56e5;
  FUN_009b5a40();
  local_14 = param_1[0x44];
  local_18 = param_1;
  local_1c = &PTR_FUN_00e40cd8;
  piStack_50 = (int *)0x9b570c;
  FUN_0099e960();
  if (DAT_00f20c18 == (int *)0x0) {
    piStack_50 = (int *)0x4;
    pcStack_54 = (char *)0x9b571d;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piStack_50 = (int *)0x9b573d;
  piVar3 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  piVar2 = (int *)param_1[0x5d];
  if ((piVar3 != piVar2) && (piVar2 != (int *)0x0)) {
    piStack_50 = (int *)0x1;
    pcStack_54 = (char *)0x9b5755;
    (**(code **)*piVar2)();
  }
  param_1[0x5d] = piVar3;
  piStack_50 = (int *)0x9b5764;
  (**(code **)(*piVar3 + 4))();
  piStack_50 = (int *)0x6;
  pcStack_54 = "cursor";
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_58 = (uint *)0x9b5780;
  FUN_00409350();
  piStack_50 = &DAT_00f0ecb4;
  pcStack_54 = (char *)in_stack_00000088;
  puStack_58 = local_38;
  local_8._0_1_ = 0xe;
  uStack_5c = 0x9b579c;
  uVar4 = FUN_00996520();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  param_1[0x45] = uVar4;
  if (0xf < local_24) {
    piStack_50 = (int *)local_38[0];
                    /* WARNING: Subroutine does not return */
    pcStack_54 = &UNK_009b57b9;
    FUN_00aae91b();
  }
  piStack_50 = (int *)0x9b57c9;
  (**(code **)(*(int *)param_1[0x45] + 0x38))();
  *(undefined1 *)((int)param_1 + 0xee) = 0;
  if (0xf < in_stack_00000024) {
    piStack_50 = (int *)param_4;
                    /* WARNING: Subroutine does not return */
    pcStack_54 = &UNK_009b57dd;
    FUN_00aae91b();
  }
  in_stack_00000024 = 0xf;
  in_stack_00000020 = 0;
  param_4 = param_4 & 0xffffff00;
  if (in_stack_00000040 < 0x10) {
    in_stack_00000040 = 0xf;
    in_stack_0000003c = 0;
    in_stack_0000002c = in_stack_0000002c & 0xffffff00;
    if (0xf < in_stack_00000060) {
      piStack_50 = (int *)in_stack_0000004c;
                    /* WARNING: Subroutine does not return */
      pcStack_54 = &UNK_009b5819;
      FUN_00aae91b();
    }
    in_stack_00000060 = 0xf;
    in_stack_0000005c = 0;
    in_stack_0000004c = in_stack_0000004c & 0xffffff00;
    if (in_stack_0000007c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    piStack_50 = (int *)in_stack_00000068;
                    /* WARNING: Subroutine does not return */
    pcStack_54 = &UNK_009b583a;
    FUN_00aae91b();
  }
  piStack_50 = (int *)in_stack_0000002c;
                    /* WARNING: Subroutine does not return */
  pcStack_54 = &UNK_009b57fb;
  FUN_00aae91b();
}

