// FUN_006cd4c0 @ 006cd4c0 body=[[006cd4c0, 006cd5d2]]


void FUN_006cd4c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_14;
  undefined4 *local_8;
  
  if (param_1 != param_2) {
    local_8 = param_1;
    while (puVar4 = local_8 + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      iVar2 = FUN_004f3500();
      iVar3 = FUN_004f3500();
      local_14 = puVar4;
      if (iVar3 < iVar2) {
        FUN_0047be90();
        iVar2 = (int)puVar4 - (int)param_1 >> 2;
        FID_conflict__memcpy(local_8 + (2 - iVar2),param_1,iVar2 << 2);
        *param_1 = uVar1;
        local_8 = puVar4;
      }
      else {
        while( true ) {
          iVar2 = FUN_004f3500();
          iVar3 = FUN_004f3500();
          if (iVar2 <= iVar3) break;
          *local_14 = local_14[-1];
          local_14 = local_14 + -1;
        }
        *local_14 = uVar1;
        local_8 = puVar4;
      }
    }
  }
  return;
}

