// FUN_00b16030 @ 00b16030 body=[[00b16030, 00b16123]]


void FUN_00b16030(undefined4 param_1)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39e39;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  uVar5 = 0;
  if (in_ECX[1] != 0) {
    do {
      piVar4 = *(int **)(*in_ECX + uVar5 * 4);
      iVar3 = (**(code **)(*piVar4 + 8))(uVar2);
      if (iVar3 == 1) {
        if (piVar4[2] != 0) {
          FUN_00b1a0f0(auStack_18);
          uStack_4 = 0;
          cVar1 = FUN_00b14730(param_1);
          uStack_4 = 0xffffffff;
          FUN_00b13650();
          if (cVar1 == '\0') goto LAB_00b160eb;
          (**(code **)*piVar4)(1);
          if ((1 < (uint)in_ECX[1]) && (iVar3 = (in_ECX[1] - uVar5) + -1, iVar3 != 0)) {
            _Dst = (void *)(*in_ECX + uVar5 * 4);
            FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar3 * 4);
          }
          in_ECX[1] = in_ECX[1] + -1;
        }
      }
      else {
LAB_00b160eb:
        uVar5 = uVar5 + 1;
      }
    } while (uVar5 < (uint)in_ECX[1]);
  }
  iVar3 = in_ECX[1];
  uVar2 = 0;
  if (iVar3 != 0) {
    piVar4 = (int *)*in_ECX;
    do {
      uVar2 = uVar2 | *(uint *)(*piVar4 + 4);
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  in_ECX[4] = uVar2;
  ExceptionList = local_c;
  return;
}

