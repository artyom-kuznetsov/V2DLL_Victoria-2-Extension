// FUN_0059a8e0 @ 0059a8e0

void FUN_0059a8e0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined8 uVar7;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x74) != 0) && (*(int *)(*(int *)(in_ECX + 0x74) + 0xa4) != 0)) {
    iVar2 = FUN_0059b610(param_2,param_3);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        param_3 = *(int *)(*(int *)(in_ECX + 0x38) + 0x234);
      }
      else {
        param_3 = *(int *)(*(int *)(in_ECX + 0x38) + 0x230);
      }
      FUN_00594230();
      iVar3 = __alldiv((longlong)DAT_0125f5c8 * (longlong)param_3,1000,0);
      iVar4 = __alldiv((longlong)param_2 * (longlong)param_4,1000,0);
      iVar3 = __alldiv((longlong)iVar4 * (longlong)(iVar3 + 1000),1000,0);
      param_3 = __alldiv((longlong)*(int *)(in_ECX + 0x3c) * (longlong)iVar3,1000,0);
      FUN_005ccdb0();
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 100) * 4);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      if ((*(int *)(iVar4 + 0x134) != *(int *)(iVar3 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar4 + 0x134) * 4) + 0x34) != 0 ||
           (((*(char *)(iVar4 + 0x130) == 'R' && (*(char *)(iVar4 + 0x131) == 'E')) &&
            (*(char *)(iVar4 + 0x132) == 'B')))) ||
          (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
           (*(char *)(iVar3 + 0x1e) == 'B')))))) {
        iVar3 = *(int *)(*(int *)(iVar4 + 0x9c) + 0x30);
        FUN_005ccdf0();
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 200);
        if (local_8 < iVar4) {
          if (iVar4 == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = (int)(1000000 / (longlong)iVar4);
          }
          iVar4 = __alldiv((longlong)iVar4 * (longlong)local_8,1000,0);
          param_2 = __alldiv((longlong)iVar4 * (longlong)param_2,1000,0);
        }
        iVar4 = (int)((ulonglong)((longlong)param_2 * -0x10624dd3) >> 0x20);
        iVar3 = iVar3 / 1000 + ((iVar4 >> 6) - (iVar4 >> 0x1f));
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        iVar3 = __alldiv((longlong)(iVar3 * 1000) * (longlong)DAT_0125f5c8,1000,0);
        iVar3 = iVar3 + 1000;
        if (1000 < iVar3) {
          uVar7 = __allmul(param_3,param_3 >> 0x1f,1000,0);
          param_3 = __alldiv(uVar7,iVar3,iVar3 >> 0x1f);
        }
      }
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(in_ECX + 0x80) = uVar1;
      iVar3 = __alldiv((longlong)*(int *)(iVar2 + 0x34) * (longlong)DAT_0125f594,1000,0);
      uVar7 = __allmul(param_3,param_3 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar7,iVar3 + 1000,iVar3 + 1000 >> 0x1f);
      uVar7 = __allmul(iVar4,iVar4 >> 0x1f,10000,0);
      param_1 = __alldiv(uVar7,1000,0);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + 0x238);
      if (iVar3 != 0) {
        uVar7 = __allmul(param_1,param_1 >> 0x1f,1000,0);
        param_1 = __alldiv(uVar7,iVar3,iVar3 >> 0x1f);
      }
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 100) * 4) +
                               0xbcc) + 0x70);
      if (0 < iVar3) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) + iVar3;
        uVar7 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        iVar4 = __alldiv(uVar7,iVar3,iVar3 >> 0x1f);
      }
      iVar3 = DAT_0125f578;
      iVar6 = DAT_0125f578 >> 0x1f;
      uVar7 = __allmul(param_1,param_1 >> 0x1f,DAT_0125f578,iVar6);
      iVar5 = __alldiv(uVar7,1000,0);
      uVar7 = __allmul(iVar4,iVar4 >> 0x1f,iVar3,iVar6);
      iVar3 = __alldiv(uVar7,1000,0);
      *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + iVar5;
      *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + iVar3;
      return;
    }
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    *(undefined4 *)(in_ECX + 0x80) = 0;
  }
  return;
}


