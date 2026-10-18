// FUN_00a808c0 @ 00a808c0 body=[[00a808c0, 00a809a3] [00a809a7, 00a809fa]]


void FUN_00a808c0(void *param_1,void *param_2)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int in_ECX;
  uint uVar6;
  int *unaff_ESI;
  uint local_8;
  
  uVar6 = in_ECX - (int)param_2 >> 2;
  if (uVar6 != 0) {
    iVar3 = unaff_ESI[1] - *unaff_ESI >> 2;
    if (0x3fffffffU - iVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar1 = iVar3 + uVar6;
    local_8 = unaff_ESI[2] - *unaff_ESI >> 2;
    if (local_8 < uVar1) {
      if (0x3fffffff - (local_8 >> 1) < local_8) {
        local_8 = 0;
      }
      else {
        local_8 = local_8 + (local_8 >> 1);
      }
      if (local_8 < uVar1) {
        local_8 = uVar1;
      }
      pvVar4 = (void *)FUN_007055a0();
      sVar2 = ((int)param_1 - *unaff_ESI >> 2) * 4;
      pvVar5 = FID_conflict__memcpy(pvVar4,(void *)*unaff_ESI,sVar2);
      pvVar5 = FID_conflict__memcpy((void *)((int)pvVar5 + sVar2),param_2,uVar6 * 4);
      FID_conflict__memcpy
                ((void *)((int)pvVar5 + uVar6 * 4),param_1,(unaff_ESI[1] - (int)param_1 >> 2) * 4);
      iVar3 = *unaff_ESI;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      *unaff_ESI = (int)pvVar4;
      unaff_ESI[2] = (int)((int)pvVar4 + local_8 * 4);
      unaff_ESI[1] = (int)((int)pvVar4 + (uVar6 + (unaff_ESI[1] - iVar3 >> 2)) * 4);
      return;
    }
    sVar2 = uVar6 * 4;
    FID_conflict__memcpy((void *)unaff_ESI[1],param_2,sVar2);
    pvVar4 = (void *)unaff_ESI[1];
    if ((param_1 != pvVar4) && (pvVar4 != (void *)(sVar2 + (int)pvVar4))) {
      FUN_00a80ad0(param_1,(void *)(sVar2 + (int)pvVar4));
    }
    unaff_ESI[1] = unaff_ESI[1] + sVar2;
  }
  return;
}

