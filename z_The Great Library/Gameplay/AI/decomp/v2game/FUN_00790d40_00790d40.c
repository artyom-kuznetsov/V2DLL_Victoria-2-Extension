// FUN_00790d40 @ 00790d40 body=[[00790d40, 00790d9e] [00790da2, 00790db1]]


void FUN_00790d40(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [5];
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43788;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0079de40(&local_3c,param_1);
  local_8 = 0;
  *unaff_ESI = local_3c;
  unaff_ESI[2] = local_34;
  unaff_ESI[1] = local_38;
  FUN_00408ed0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

