// FUN_009500e0 @ 009500e0 body=[[009500e0, 009502bd]]


void FUN_009500e0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *unaff_EDI;
  
  iVar5 = *(int *)(param_1 + 0xc);
  *unaff_EDI = 0;
  if ((iVar5 != 0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(), iVar5 = DAT_012586dc, cVar3 != '\0'
     )) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      iVar4 = 0;
      if (iVar2 < 0x8a2) {
        if (iVar2 == 0x8a1) {
          iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x7c);
        }
        else if (iVar2 == 0x264) {
          iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x424);
        }
        else if (iVar2 == 0x6c2) {
          iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x450);
        }
      }
      else if (iVar2 < 0xa30) {
        if (iVar2 == 0xa2f) {
          iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x5c);
        }
        else {
          switch(iVar2) {
          case 0x8a2:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x48);
            break;
          case 0x8a3:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x80);
            break;
          case 0x8a4:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x54);
            break;
          case 0x8a5:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 100);
            break;
          case 0x8a7:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x68);
            break;
          case 0x8a8:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x70);
            break;
          case 0x8a9:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x74);
            break;
          case 0x8aa:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x4c);
            break;
          case 0x8da:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x78);
            break;
          case 0x942:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x50);
            break;
          case 0x975:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x84);
            break;
          case 0x976:
            iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x88);
          }
        }
      }
      else if (iVar2 == 0xa30) {
        iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x60);
      }
      else if (iVar2 == 0xa38) {
        iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x6c);
      }
      else if (iVar2 == 0xa4c) {
        iVar4 = *(int *)(*(int *)(iVar5 + 0x30) + 0x58);
      }
      *unaff_EDI = *unaff_EDI + iVar4;
    }
    iVar4 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0xf4) * (longlong)*unaff_EDI,1000,
                     0);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x1c) * 4) +
                             0xbe8) + *(int *)(param_1 + 0x24) * 4);
    *unaff_EDI = iVar4;
    if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x34), iVar2 != 0)) &&
       (*(char *)(iVar2 + 0xfc) != '\0')) {
      iVar5 = __alldiv((longlong)iVar4 * (longlong)*(int *)(*(int *)(iVar5 + 0x30) + 0x49c),1000,0);
      *unaff_EDI = iVar5;
    }
  }
  return;
}

