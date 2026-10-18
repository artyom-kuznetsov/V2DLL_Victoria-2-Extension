// FUN_00989c00 @ 00989c00 body=[[00989c00, 00989f0d]]


void FUN_00989c00(uint param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  size_t _Size;
  int *piVar4;
  void *_Dst;
  int *piVar5;
  void *_Src;
  uint uVar6;
  int *unaff_ESI;
  uint unaff_EDI;
  
  uVar1 = unaff_ESI[4];
  if ((uVar1 < unaff_EDI) || ((uint)param_2[4] < param_3)) {
    FUN_00aad3fa("invalid string position");
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = uVar1 - unaff_EDI;
  if (uVar3 < param_1) {
    param_1 = uVar3;
  }
  uVar6 = param_2[4] - param_3;
  if (uVar6 < param_4) {
    param_4 = uVar6;
  }
  if (uVar1 - param_1 < -param_4 - 1) {
    _Size = uVar3 - param_1;
    uVar3 = param_4 + (uVar1 - param_1);
    if (uVar1 < uVar3) {
      if (uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("string too long");
      }
      if ((uint)unaff_ESI[5] < uVar3) {
        FUN_00409640(uVar3,uVar1);
      }
      else if (uVar3 == 0) {
        unaff_ESI[4] = 0;
        piVar4 = unaff_ESI;
        if (0xf < (uint)unaff_ESI[5]) {
          piVar4 = (int *)*unaff_ESI;
        }
        *(undefined1 *)piVar4 = 0;
      }
    }
    if (unaff_ESI == param_2) {
      if (param_1 < param_4) {
        if (unaff_EDI < param_3) {
          if (param_3 < unaff_EDI + param_1) {
            piVar5 = unaff_ESI;
            piVar4 = unaff_ESI;
            if (0xf < (uint)unaff_ESI[5]) {
              piVar5 = (int *)*unaff_ESI;
              piVar4 = (int *)*unaff_ESI;
            }
            FID_conflict__memcpy
                      ((void *)((int)piVar5 + unaff_EDI),(void *)((int)piVar4 + param_3),param_1);
            piVar5 = unaff_ESI;
            piVar4 = unaff_ESI;
            if (0xf < (uint)unaff_ESI[5]) {
              piVar5 = (int *)*unaff_ESI;
              piVar4 = (int *)*unaff_ESI;
            }
            FID_conflict__memcpy
                      ((void *)((int)piVar5 + param_4 + unaff_EDI),
                       (void *)((int)piVar4 + param_1 + unaff_EDI),_Size);
            piVar4 = unaff_ESI;
            param_2 = unaff_ESI;
            if (0xf < (uint)unaff_ESI[5]) {
              param_2 = (int *)*unaff_ESI;
              piVar4 = (int *)*unaff_ESI;
            }
            _Src = (void *)((int)piVar4 + param_4 + param_3);
            param_4 = param_4 - param_1;
            _Dst = (void *)((int)param_2 + param_1 + unaff_EDI);
          }
          else {
            piVar5 = unaff_ESI;
            piVar4 = unaff_ESI;
            if (0xf < (uint)unaff_ESI[5]) {
              piVar5 = (int *)*unaff_ESI;
              piVar4 = (int *)*unaff_ESI;
            }
            FID_conflict__memcpy
                      ((void *)((int)piVar5 + param_4 + unaff_EDI),
                       (void *)((int)piVar4 + param_1 + unaff_EDI),_Size);
            if ((uint)unaff_ESI[5] < 0x10) {
              _Src = (void *)((int)unaff_ESI + param_4 + (param_3 - param_1));
              _Dst = (void *)((int)unaff_ESI + unaff_EDI);
            }
            else {
              _Src = (void *)((*unaff_ESI - param_1) + param_3 + param_4);
              _Dst = (void *)(*unaff_ESI + unaff_EDI);
            }
          }
        }
        else {
          piVar5 = unaff_ESI;
          piVar4 = unaff_ESI;
          if (0xf < (uint)unaff_ESI[5]) {
            piVar5 = (int *)*unaff_ESI;
            piVar4 = (int *)*unaff_ESI;
          }
          FID_conflict__memcpy
                    ((void *)((int)piVar5 + param_4 + unaff_EDI),
                     (void *)((int)piVar4 + param_1 + unaff_EDI),_Size);
          if ((uint)unaff_ESI[5] < 0x10) {
            _Src = (void *)((int)unaff_ESI + param_3);
            _Dst = (void *)((int)unaff_ESI + unaff_EDI);
          }
          else {
            _Src = (void *)(*unaff_ESI + param_3);
            _Dst = (void *)(*unaff_ESI + unaff_EDI);
          }
        }
      }
      else {
        piVar5 = unaff_ESI;
        piVar4 = unaff_ESI;
        if (0xf < (uint)unaff_ESI[5]) {
          piVar5 = (int *)*unaff_ESI;
          piVar4 = (int *)*unaff_ESI;
        }
        FID_conflict__memcpy
                  ((void *)((int)piVar5 + unaff_EDI),(void *)((int)piVar4 + param_3),param_4);
        if ((uint)unaff_ESI[5] < 0x10) {
          _Src = (void *)((int)unaff_ESI + param_1 + unaff_EDI);
          _Dst = (void *)((int)unaff_ESI + param_4 + unaff_EDI);
          param_4 = _Size;
        }
        else {
          _Src = (void *)(*unaff_ESI + unaff_EDI + param_1);
          _Dst = (void *)(*unaff_ESI + unaff_EDI + param_4);
          param_4 = _Size;
        }
      }
      FID_conflict__memcpy(_Dst,_Src,param_4);
    }
    else {
      piVar5 = unaff_ESI;
      piVar4 = unaff_ESI;
      if (0xf < (uint)unaff_ESI[5]) {
        piVar5 = (int *)*unaff_ESI;
        piVar4 = (int *)*unaff_ESI;
      }
      FID_conflict__memcpy
                ((void *)((int)piVar5 + param_4 + unaff_EDI),
                 (void *)((int)piVar4 + param_1 + unaff_EDI),_Size);
      if (0xf < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      piVar4 = unaff_ESI;
      if (0xf < (uint)unaff_ESI[5]) {
        piVar4 = (int *)*unaff_ESI;
      }
      FID_conflict__memcpy
                ((void *)((int)piVar4 + unaff_EDI),(void *)((int)param_2 + param_3),param_4);
    }
    unaff_ESI[4] = uVar3;
    if (0xf < (uint)unaff_ESI[5]) {
      *(undefined1 *)(*unaff_ESI + uVar3) = 0;
      return;
    }
    *(undefined1 *)((int)unaff_ESI + uVar3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aad3ad("string too long");
}

