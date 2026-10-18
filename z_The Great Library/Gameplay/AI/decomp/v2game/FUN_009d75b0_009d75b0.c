// FUN_009d75b0 @ 009d75b0 body=[[009d75b0, 009d768a] [009d768e, 009d76b3] [009d76c9, 009d770c]]


void FUN_009d75b0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *_Dst;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a790;
  local_10 = ExceptionList;
  uVar3 = param_3 - param_2;
  if (uVar3 != 0) {
    iVar1 = *in_ECX;
    if ((iVar1 - in_ECX[1]) - 1U < uVar3) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar4 = (in_ECX[1] - iVar1) + uVar3;
    local_18 = in_ECX[2] - iVar1;
    if (local_18 < uVar4) {
      if (-(local_18 >> 1) - 1 < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (local_18 < uVar4) {
        local_18 = uVar4;
      }
      ExceptionList = &local_10;
      pvVar2 = (void *)FUN_009d6a00();
      local_8 = 0;
      FID_conflict__memcpy(pvVar2,(void *)*in_ECX,(int)param_1 - *in_ECX);
      _Dst = (void *)FUN_006a42a0(param_2,param_3,param_3);
      FID_conflict__memcpy(_Dst,param_1,in_ECX[1] - (int)param_1);
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      in_ECX[2] = local_18 + (int)pvVar2;
      in_ECX[1] = (int)pvVar2 + uVar3 + (in_ECX[1] - iVar1);
      *in_ECX = (int)pvVar2;
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_006a42a0(param_2,param_3,param_3);
    pvVar2 = (void *)in_ECX[1];
    if ((param_1 != pvVar2) && (pvVar2 != (void *)((int)pvVar2 + uVar3))) {
      FUN_009d7710(param_1);
    }
    in_ECX[1] = in_ECX[1] + uVar3;
  }
  ExceptionList = local_10;
  return;
}

