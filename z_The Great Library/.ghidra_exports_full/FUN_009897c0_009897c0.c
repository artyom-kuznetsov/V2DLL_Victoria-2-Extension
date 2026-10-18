// FUN_009897c0 @ 009897c0 body=[[009897c0, 00989a4d]]


void FUN_009897c0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar2 = unaff_ESI[4];
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = unaff_ESI[5];
      piVar4 = unaff_ESI;
      if (0xf < uVar3) {
        piVar4 = (int *)*unaff_ESI;
      }
      bVar1 = *(byte *)((int)piVar4 + iVar5);
      if (0xbf < bVar1) {
        if (bVar1 < 199) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x41;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x41;
          }
        }
        else if (bVar1 == 199) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x43;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x43;
          }
        }
        else if ((byte)(bVar1 + 0x38) < 4) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x45;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x45;
          }
        }
        else if ((byte)(bVar1 + 0x34) < 4) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x49;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x49;
          }
        }
        else if (bVar1 == 0xd0) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x44;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x44;
          }
        }
        else if (bVar1 == 0xd1) {
          if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x4e;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x4e;
          }
        }
        else if (((bVar1 < 0xd2) || (0xd6 < bVar1)) && (bVar1 != 0xd8)) {
          if ((byte)(bVar1 + 0x27) < 4) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x55;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x55;
            }
          }
          else if (bVar1 == 0xdd) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x59;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x59;
            }
          }
          else if (bVar1 == 0xdf) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x73;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x73;
            }
          }
          else if ((byte)(bVar1 + 0x20) < 7) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x61;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x61;
            }
          }
          else if (bVar1 == 0xe7) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 99;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 99;
            }
          }
          else if ((byte)(bVar1 + 0x18) < 4) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x65;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x65;
            }
          }
          else if ((byte)(bVar1 + 0x14) < 4) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x69;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x69;
            }
          }
          else if (bVar1 == 0xf0) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 100;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 100;
            }
          }
          else if (bVar1 == 0xf1) {
            if (uVar3 < 0x10) {
              *(undefined1 *)((int)unaff_ESI + iVar5) = 0x6e;
            }
            else {
              *(undefined1 *)(*unaff_ESI + iVar5) = 0x6e;
            }
          }
          else if (((bVar1 < 0xf2) || (0xf6 < bVar1)) && (bVar1 != 0xf8)) {
            if ((byte)(bVar1 + 7) < 4) {
              if (uVar3 < 0x10) {
                *(undefined1 *)((int)unaff_ESI + iVar5) = 0x75;
              }
              else {
                *(undefined1 *)(*unaff_ESI + iVar5) = 0x75;
              }
            }
            else if ((bVar1 == 0xfd) || (bVar1 == 0xff)) {
              piVar4 = unaff_ESI;
              if (0xf < uVar3) {
                piVar4 = (int *)*unaff_ESI;
              }
              *(undefined1 *)((int)piVar4 + iVar5) = 0x79;
            }
          }
          else if (uVar3 < 0x10) {
            *(undefined1 *)((int)unaff_ESI + iVar5) = 0x6f;
          }
          else {
            *(undefined1 *)(*unaff_ESI + iVar5) = 0x6f;
          }
        }
        else if (uVar3 < 0x10) {
          *(undefined1 *)((int)unaff_ESI + iVar5) = 0x4f;
        }
        else {
          *(undefined1 *)(*unaff_ESI + iVar5) = 0x4f;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

