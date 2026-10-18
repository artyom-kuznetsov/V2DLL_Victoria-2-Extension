// FUN_00a43b70 @ 00a43b70 body=[[00a43b70, 00a43d4b]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00a43b70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_14[2] = &LAB_00b4110e;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 0;
  puVar1 = param_1 + 0x23;
  *puVar1 = CLostDeviceInterface::vftable;
  *param_1 = &PTR_FUN_00e40ed0;
  *puVar1 = &PTR_LAB_00e40f50;
  _eh_vector_constructor_iterator_(param_1 + 0x26,0x1c,10,FUN_00988530,FUN_00408ad0);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x89] = 0;
  param_1[0x59e] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x59f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  iVar4 = DAT_01258a74;
  param_1[0x88] = 0;
  ppuVar2 = *(undefined4 ***)(iVar4 + 0x6bc94);
  local_14[0] = (undefined1 *)puVar1;
  if ((local_14 < ppuVar2) && (ppuVar3 = *(undefined4 ***)(iVar4 + 0x6bc90), ppuVar3 <= local_14)) {
    if (ppuVar2 == *(undefined4 ***)(iVar4 + 0x6bc98)) {
      FUN_00a513f0();
    }
    if (*(undefined4 **)(iVar4 + 0x6bc94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar4 + 0x6bc94) =
           *(undefined4 *)(*(int *)(iVar4 + 0x6bc90) + ((int)local_14 - (int)ppuVar3 >> 2) * 4);
    }
  }
  else {
    if (ppuVar2 == *(undefined4 ***)(iVar4 + 0x6bc98)) {
      FUN_00a513f0();
    }
    if (*(int **)(iVar4 + 0x6bc94) != (int *)0x0) {
      **(int **)(iVar4 + 0x6bc94) = (int)local_14[0];
    }
  }
  *(int *)(iVar4 + 0x6bc94) = *(int *)(iVar4 + 0x6bc94) + 4;
  ExceptionList = local_14[1];
  return param_1;
}

