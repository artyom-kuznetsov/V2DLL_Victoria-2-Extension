// FUN_00951300 @ 00951300 body=[[00951300, 00951503]]


undefined4 * FUN_00951300(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((*(int *)(in_EAX + 0xc) != 0) &&
     (cVar2 = (**(code **)(**(int **)(in_EAX + 0xc) + 0x1c))(), cVar2 != '\0')) {
    piVar4 = *(int **)(*(int *)(in_EAX + 0xc) + 0x120);
    while (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[2];
      iVar3 = 0;
      if (iVar1 < 0x8a2) {
        if (iVar1 == 0x8a1) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x264);
        }
        else if (iVar1 == 0x264) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x438);
        }
        else if (iVar1 == 0x6c2) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x464);
        }
      }
      else if (iVar1 < 0xa30) {
        if (iVar1 == 0xa2f) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x244);
        }
        else {
          switch(iVar1) {
          case 0x8a2:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x234);
            break;
          case 0x8a3:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x268);
            break;
          case 0x8a4:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x240);
            break;
          case 0x8a5:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x24c);
            break;
          case 0x8a7:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x250);
            break;
          case 0x8a8:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 600);
            break;
          case 0x8a9:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x25c);
            break;
          case 0x8aa:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x238);
            break;
          case 0x8da:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x260);
            break;
          case 0x942:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x23c);
            break;
          case 0x975:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x26c);
            break;
          case 0x976:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x270);
          }
        }
      }
      else if (iVar1 == 0xa30) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x248);
      }
      else if (iVar1 == 0xa38) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x254);
      }
      else if (iVar1 == 0xa4c) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x274);
      }
      iVar6 = iVar6 + iVar3;
    }
  }
  iVar6 = __alldiv((longlong)*(int *)(*(int *)(in_EAX + 0xc) + 0x118) * (longlong)iVar6,1000,0);
  piVar4 = (int *)FUN_0092d780();
  uVar5 = __alldiv((longlong)iVar6 * (longlong)*piVar4,1000,0);
  *param_1 = uVar5;
  return param_1;
}

