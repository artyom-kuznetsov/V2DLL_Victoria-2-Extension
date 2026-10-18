// FUN_0099f160 @ 0099f160 body=[[0099f160, 0099f1d9]]


void FUN_0099f160(int *param_1)

{
  int unaff_ESI;
  undefined4 *unaff_EDI;
  char local_104 [256];
  
  if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
    FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
  }
  if (0xf < (uint)unaff_EDI[5]) {
    unaff_EDI = (undefined4 *)*unaff_EDI;
  }
  __snprintf(local_104,0xff,"%s",unaff_EDI);
  FUN_0099ff90(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  (**(code **)(*param_1 + 4))();
  return;
}

