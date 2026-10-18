// FUN_009d7360 @ 009d7360 body=[[009d7360, 009d73b6]]


void FUN_009d7360(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *in_EAX;
  int *unaff_ESI;
  
  puVar1 = (undefined1 *)unaff_ESI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined1 *)*unaff_ESI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined1 *)unaff_ESI[2]) {
      FUN_009d73c0();
    }
    if ((undefined1 *)unaff_ESI[1] != (undefined1 *)0x0) {
      *(undefined1 *)unaff_ESI[1] = in_EAX[*unaff_ESI - (int)puVar2];
      unaff_ESI[1] = unaff_ESI[1] + 1;
      return;
    }
  }
  else {
    if (puVar1 == (undefined1 *)unaff_ESI[2]) {
      FUN_009d73c0();
    }
    if ((undefined1 *)unaff_ESI[1] != (undefined1 *)0x0) {
      *(undefined1 *)unaff_ESI[1] = *in_EAX;
    }
  }
  unaff_ESI[1] = unaff_ESI[1] + 1;
  return;
}

