# Endian
/Marco Penetrejsn

Valde att skriva en method som genererar 8 Big endians mellan talen 1 och 65535 som är det näst minsta och näst högsta värdet en 2 byte int kan vara.
Inleder Main med att kalla på min generator sedan läser jag av generatorn och skapar LittleEndian och MiddleBytes och förbereder att skriva till dessa.
Använder 2 chars för att kasta om bitarna till en littleEndian och skriver sedan ut littleEndian.
Skriver ut middlebytes som en littleendian fast där jag har plockat ut dem 8 mittersta bitarna.


Valde att själv skifta bitar än att använda inbyggda verktyg som swap då det kändes att för denna uppgiften var det mer lätt kodat att göra sin egen satta formel.
