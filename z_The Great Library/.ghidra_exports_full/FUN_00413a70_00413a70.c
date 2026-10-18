// FUN_00413a70 @ 00413a70 body=[[00413a70, 00413b70] [00413b74, 00413b9a] [00413bb0, 00413bf8]]


void FUN_00413a70(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d4b0;
  local_10 = ExceptionList;
  uVar5 = param_3 - param_2 >> 2;
  if (uVar5 != 0) {
    iVar4 = in_ECX[1] - *in_ECX >> 2;
    if (0x3fffffffU - iVar4 < uVar5) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar1 = iVar4 + uVar5;
    local_18 = in_ECX[2] - *in_ECX >> 2;
    if (local_18 < uVar1) {
      if (0x3fffffff - (local_18 >> 1) < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (local_18 < uVar1) {
        local_18 = uVar1;
      }
      ExceptionList = &local_10;
      pvVar2 = (void *)FUN_007055a0();
      local_8 = 0;
      FID_conflict__memcpy(pvVar2,(void *)*in_ECX,((int)param_1 - *in_ECX >> 2) * 4);
      pvVar3 = (void *)FUN_00466da0(param_2,param_3,param_3);
      FID_conflict__memcpy(pvVar3,param_1,(in_ECX[1] - (int)param_1 >> 2) * 4);
      iVar4 = *in_ECX;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar4);
      }
      in_ECX[2] = (int)((int)pvVar2 + local_18 * 4);
      in_ECX[1] = (int)((int)pvVar2 + (uVar5 + (in_ECX[1] - iVar4 >> 2)) * 4);
      *in_ECX = (int)pvVar2;
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_00466da0(param_2,param_3,param_3);
    pvVar3 = (void *)in_ECX[1];
    pvVar2 = (void *)(uVar5 * 4 + (int)pvVar3);
    if ((param_1 != pvVar3) && (pvVar3 != pvVar2)) {
      FUN_006a42d0(param_1,pvVar2);
    }
    in_ECX[1] = in_ECX[1] + uVar5 * 4;
  }
  ExceptionList = local_10;
  return;
}

