// FUN_009d7490 @ 009d7490 body=[[009d7490, 009d754d] [009d7551, 009d75a2]]


void FUN_009d7490(void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint _Size;
  int *unaff_ESI;
  size_t _Size_00;
  
  _Size = param_3 - (int)param_2;
  if (_Size != 0) {
    iVar1 = *unaff_ESI;
    pvVar2 = (void *)unaff_ESI[1];
    if ((iVar1 - (int)pvVar2) - 1U < _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar4 = (int)pvVar2 + (_Size - iVar1);
    param_3 = unaff_ESI[2] - iVar1;
    if (param_3 < uVar4) {
      if (-(param_3 >> 1) - 1 < param_3) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + (param_3 >> 1);
      }
      if (param_3 < uVar4) {
        param_3 = uVar4;
      }
      pvVar2 = (void *)FUN_009d6a00();
      _Size_00 = (int)param_1 - *unaff_ESI;
      pvVar3 = FID_conflict__memcpy(pvVar2,(void *)*unaff_ESI,_Size_00);
      pvVar3 = FID_conflict__memcpy((void *)((int)pvVar3 + _Size_00),param_2,_Size);
      FID_conflict__memcpy((void *)((int)pvVar3 + _Size),param_1,unaff_ESI[1] - (int)param_1);
      iVar1 = *unaff_ESI;
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      unaff_ESI[2] = param_3 + (int)pvVar2;
      unaff_ESI[1] = (int)pvVar2 + _Size + (unaff_ESI[1] - iVar1);
      *unaff_ESI = (int)pvVar2;
      return;
    }
    FID_conflict__memcpy(pvVar2,param_2,_Size);
    pvVar2 = (void *)unaff_ESI[1];
    if ((param_1 != pvVar2) && (pvVar2 != (void *)((int)pvVar2 + _Size))) {
      FUN_009d7710(param_1);
    }
    unaff_ESI[1] = unaff_ESI[1] + _Size;
  }
  return;
}

