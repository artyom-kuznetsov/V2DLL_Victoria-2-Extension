// FUN_00991840 @ 00991840 body=[[00991840, 0099189f]]


void FUN_00991840(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 *unaff_ESI;
  char local_210 [520];
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_00991790("Victoria II",local_210);
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (cVar1 != '\0') {
    pcVar2 = local_210;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(local_210,(int)pcVar2 - (int)(local_210 + 1));
  }
  return;
}

