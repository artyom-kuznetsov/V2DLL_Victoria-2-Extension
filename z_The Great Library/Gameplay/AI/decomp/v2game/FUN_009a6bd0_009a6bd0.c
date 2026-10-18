// FUN_009a6bd0 @ 009a6bd0 body=[[009a6bd0, 009a6cf7]]


undefined4 FUN_009a6bd0(void)

{
  int iVar1;
  char cVar2;
  SHORT SVar3;
  int *unaff_ESI;
  
  if (unaff_ESI[1] != 0x102) {
    if (*unaff_ESI == 0x28) {
      return 1;
    }
    if (*unaff_ESI == 0x26) {
      return 1;
    }
    cVar2 = FUN_009e0980(unaff_ESI);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_009e09c0(unaff_ESI);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*unaff_ESI == 0x2d) && (SVar3 = GetKeyState(0x11), SVar3 < 0)) {
      return 1;
    }
    if ((*unaff_ESI == 0x2e) && (SVar3 = GetKeyState(0x10), -1 < SVar3)) {
      return 1;
    }
    cVar2 = FUN_009e0a00();
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*unaff_ESI == 0x25) && (SVar3 = GetKeyState(0x11), SVar3 < 0)) {
      return 1;
    }
    cVar2 = FUN_009e0a70();
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_009e0a40();
    if (cVar2 != '\0') {
      return 1;
    }
    iVar1 = *unaff_ESI;
    if ((iVar1 == 0x10) && (unaff_ESI[1] != 0x102)) {
      return 1;
    }
    if ((iVar1 == 0x11) && (unaff_ESI[1] != 0x102)) {
      return 1;
    }
    if ((iVar1 == 0x2d) && (SVar3 = GetKeyState(0x10), SVar3 < 0)) {
      return 1;
    }
    cVar2 = FUN_009e0960();
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*unaff_ESI == 0x27) && (SVar3 = GetKeyState(0x11), SVar3 < 0)) {
      return 1;
    }
    cVar2 = FUN_009e0a40();
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_009e0a20();
    if (cVar2 != '\0') {
      return 1;
    }
    iVar1 = *unaff_ESI;
    if (iVar1 == 0x1b) {
      return 1;
    }
    if ((0x6f < iVar1) && (iVar1 < 0x88)) {
      return 1;
    }
    if (iVar1 == 0x22) {
      return 1;
    }
    if (iVar1 == 0x21) {
      return 1;
    }
  }
  if (*unaff_ESI == 9) {
    return 1;
  }
  return 0;
}

