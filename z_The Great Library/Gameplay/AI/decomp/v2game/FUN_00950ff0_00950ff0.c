// FUN_00950ff0 @ 00950ff0 body=[[00950ff0, 009511f3]]


undefined4 * FUN_00950ff0(undefined4 *param_1)

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
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x220);
        }
        else if (iVar1 == 0x264) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x434);
        }
        else if (iVar1 == 0x6c2) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x460);
        }
      }
      else if (iVar1 < 0xa30) {
        if (iVar1 == 0xa2f) {
          iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x200);
        }
        else {
          switch(iVar1) {
          case 0x8a2:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1f0);
            break;
          case 0x8a3:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x224);
            break;
          case 0x8a4:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1fc);
            break;
          case 0x8a5:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x208);
            break;
          case 0x8a7:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x20c);
            break;
          case 0x8a8:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x214);
            break;
          case 0x8a9:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x218);
            break;
          case 0x8aa:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 500);
            break;
          case 0x8da:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x21c);
            break;
          case 0x942:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1f8);
            break;
          case 0x975:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x228);
            break;
          case 0x976:
            iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x22c);
          }
        }
      }
      else if (iVar1 == 0xa30) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x204);
      }
      else if (iVar1 == 0xa38) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x210);
      }
      else if (iVar1 == 0xa4c) {
        iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x230);
      }
      iVar6 = iVar6 + iVar3;
    }
  }
  iVar6 = __alldiv((longlong)*(int *)(*(int *)(in_EAX + 0xc) + 0x114) * (longlong)iVar6,1000,0);
  piVar4 = (int *)FUN_0092d780();
  uVar5 = __alldiv((longlong)iVar6 * (longlong)*piVar4,1000,0);
  *param_1 = uVar5;
  return param_1;
}

