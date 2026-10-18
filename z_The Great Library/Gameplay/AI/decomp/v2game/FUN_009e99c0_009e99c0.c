// FUN_009e99c0 @ 009e99c0 body=[[009e99c0, 009e9a55] [009e9a59, 009e9a8e]]


void FUN_009e99c0(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  char *pcVar5;
  undefined1 *unaff_ESI;
  DWORD unaff_EDI;
  CHAR local_c4 [160];
  undefined4 local_24;
  undefined4 ***local_20 [4];
  undefined4 local_10;
  uint local_c;
  
  local_24 = 0;
  DVar2 = FormatMessageA(0x1200,(LPCVOID)0x0,unaff_EDI,0x400,local_c4,0xa0,(va_list *)0x0);
  if (DVar2 == 0) {
    iVar3 = AMGetErrorTextA(unaff_EDI,local_c4,0xa0);
    if (iVar3 == 0) {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (undefined4 ***)((uint)local_20[0] & 0xffffff00);
      FUN_00409350("Unknown Error: 0x%2x",0x14);
      ppppuVar4 = (undefined4 ****)local_20[0];
      if (local_c < 0x10) {
        ppppuVar4 = local_20;
      }
      FUN_009e81b0(local_c4,0xa0,ppppuVar4);
      if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_20[0]);
      }
    }
  }
  pcVar5 = local_c4;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_c4,(int)pcVar5 - (int)(local_c4 + 1));
  return;
}

