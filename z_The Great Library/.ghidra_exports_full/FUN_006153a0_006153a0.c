// FUN_006153a0 @ 006153a0 body=[[006153a0, 0061560f]]


undefined1 * FUN_006153a0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  uint uVar5;
  
  cVar3 = (**(code **)(*in_EAX + 0x6c))();
  if (((cVar3 != '\0') ||
      (iVar1 = in_EAX[5],
      *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <= iVar1)) ||
     (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + iVar1 * 4) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    return param_1;
  }
  iVar2 = in_EAX[4];
  iVar4 = in_EAX[3];
  cVar3 = FUN_00911760(1);
  if (cVar3 != '\0') {
    if (DAT_012589a7 == '\0') {
      if ((iVar1 != iVar4) && (cVar3 = (**(code **)(*in_EAX + 0x6c))(), cVar3 != '\0'))
      goto LAB_0061542e;
    }
    else if (iVar1 != iVar4) goto LAB_0061542e;
    iVar4 = (**(code **)(*in_EAX + 0x20))();
    if (iVar4 < 0x81f) {
      if (iVar4 == 0x81e) {
        uVar5 = FUN_0083de70(iVar2,iVar1,0);
      }
      else if (iVar4 == 0x332) {
        uVar5 = FUN_00841640(0,iVar2,iVar1);
      }
      else {
        if (iVar4 == 0x38d) goto LAB_0061542e;
        if (iVar4 != 0x470) goto switchD_00615507_caseD_899;
        if ((in_EAX[0xb] < 0) || ((in_EAX[0xb] < 1 && ((uint)in_EAX[10] < 0x28001)))) {
          uVar5 = 0;
        }
        else {
          uVar5 = 100;
        }
      }
    }
    else if (iVar4 < 0x9fb) {
      if (iVar4 == 0x9fa) {
        uVar5 = FUN_00843a10(0,iVar2,iVar1);
      }
      else {
        switch(iVar4) {
        case 0x897:
        case 0x898:
          cVar3 = FUN_00911760(0);
          uVar5 = -(uint)(cVar3 != '\0') & 100;
          break;
        default:
          goto switchD_00615507_caseD_899;
        case 0x8c6:
          uVar5 = FUN_008419c0();
          break;
        case 0x8c7:
          uVar5 = FUN_00842a00(iVar2,iVar1);
          break;
        case 0x8c8:
          uVar5 = FUN_00842a50(0,0,iVar2,iVar1);
          break;
        case 0x8c9:
          uVar5 = FUN_008430d0();
          break;
        case 0x8ca:
          uVar5 = FUN_008416b0(iVar2,iVar1);
          break;
        case 0x8cb:
          uVar5 = FUN_00841900(iVar2,iVar1);
          break;
        case 0x8d5:
          uVar5 = FUN_00844050(iVar2,iVar1);
          break;
        case 0x8d6:
          uVar5 = FUN_00844140(iVar2,iVar1);
        }
      }
    }
    else if (iVar4 == 0x9fb) {
      uVar5 = FUN_00843b90(iVar2,iVar1);
    }
    else {
      if (iVar4 != 0xa02) goto switchD_00615507_caseD_899;
      uVar5 = FUN_00843170();
    }
    if (0x31 < (int)uVar5) {
LAB_0061542e:
      FUN_00615690(param_1,100);
      return param_1;
    }
  }
switchD_00615507_caseD_899:
  FUN_00615690(param_1,0);
  return param_1;
}

