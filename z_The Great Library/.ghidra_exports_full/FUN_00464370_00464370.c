// FUN_00464370 @ 00464370 body=[[00464370, 004643aa]]


void FUN_00464370(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  return;
}

