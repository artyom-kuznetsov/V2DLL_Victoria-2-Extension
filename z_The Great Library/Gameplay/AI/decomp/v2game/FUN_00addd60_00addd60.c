// FUN_00addd60 @ 00addd60 body=[[00addd60, 00adddd2]]


int FUN_00addd60(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *_Dst;
  int iVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = 0;
  iVar2 = 0;
  if (in_ECX[1] != 0) {
    do {
      _Dst = (int *)(*in_ECX + uVar3 * 4);
      bVar4 = *(int *)(*_Dst + 0x18) == 0;
      bVar5 = *(int *)(*_Dst + 0x1c) == 0;
      if (param_3 == '\0') {
        if ((!bVar4) && (!bVar5)) goto LAB_00addd94;
LAB_00adddab:
        if ((1 < (uint)in_ECX[1]) && (iVar1 = (in_ECX[1] - uVar3) + -1, iVar1 != 0)) {
          FID_conflict__memcpy(_Dst,_Dst + 1,iVar1 * 4);
        }
        in_ECX[1] = in_ECX[1] + -1;
        iVar2 = iVar2 + 1;
      }
      else {
        if ((bVar4) && (bVar5)) goto LAB_00adddab;
LAB_00addd94:
        uVar3 = uVar3 + 1;
      }
    } while (uVar3 < (uint)in_ECX[1]);
  }
  return iVar2;
}

