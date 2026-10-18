// FUN_0083db20 @ 0083db20  (requested 0083DB20, first bytes: 55 8B EC 83 E4 F8 83 EC)


uint FUN_0083db20(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[3];
  cVar1 = FUN_00911760(param_4);
  if ((cVar1 == '\0') && (param_5 != '\0')) {
switchD_0083dc49_caseD_899:
    return 0;
  }
  if (DAT_012589a7 == '\0') {
    if ((param_3 != iVar2) && (cVar1 = (**(code **)(*param_1 + 0x6c))(), cVar1 != '\0')) {
      return 100;
    }
  }
  else if (param_3 != iVar2) {
    return 100;
  }
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 < 0x81f) {
    if (iVar2 == 0x81e) {
      uVar3 = FUN_0083de70(param_2,param_3,0);
    }
    else if (iVar2 == 0x332) {
      uVar3 = FUN_00841640(param_6,param_2,param_3);
    }
    else if (iVar2 == 0x38d) {
      uVar3 = 0x32;
    }
    else {
      if (iVar2 != 0x470) {
        return 0;
      }
      if ((param_1[0xb] < 0) || ((param_1[0xb] < 1 && ((uint)param_1[10] < 0x28001)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = 100;
      }
    }
  }
  else if (iVar2 < 0x9fb) {
    if (iVar2 == 0x9fa) {
      uVar3 = FUN_00843a10(param_6,param_2,param_3);
    }
    else {
      switch(iVar2) {
      case 0x897:
      case 0x898:
        cVar1 = FUN_00911760(0);
        uVar3 = -(uint)(cVar1 != '\0') & 100;
        break;
      default:
        goto switchD_0083dc49_caseD_899;
      case 0x8b0:
      case 0x8b1:
      case 0x8c1:
      case 0x8c2:
      case 0x8c4:
      case 0x8d4:
      case 0x8dd:
      case 0x8e4:
        uVar3 = 0;
        break;
      case 0x8c6:
        uVar3 = FUN_008419c0(param_1,param_6,param_2,param_3);
        break;
      case 0x8c7:
        uVar3 = FUN_00842a00(param_2,param_3);
        break;
      case 0x8c8:
        uVar3 = FUN_00842a50(param_6,param_7,param_2,param_3);
        break;
      case 0x8c9:
        uVar3 = FUN_008430d0(param_1,param_2,param_3);
        break;
      case 0x8ca:
        uVar3 = FUN_008416b0(param_2,param_3);
        break;
      case 0x8cb:
        uVar3 = FUN_00841900(param_2,param_3);
        break;
      case 0x8d5:
        uVar3 = FUN_00844050(param_2,param_3);
        break;
      case 0x8d6:
        uVar3 = FUN_00844140(param_2,param_3);
      }
    }
  }
  else if (iVar2 == 0x9fb) {
    uVar3 = FUN_00843b90(param_2,param_3);
  }
  else {
    if (iVar2 != 0xa02) {
      return 0;
    }
    uVar3 = FUN_00843170(param_1,0,param_2,param_3);
  }
  if ((char)param_7 == '\0') {
    uVar3 = ((int)uVar3 < 0x32) - 1 & 100;
  }
  return uVar3;
}

