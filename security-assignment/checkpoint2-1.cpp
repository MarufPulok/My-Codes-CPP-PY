#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string cText = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shv zcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm.klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuj, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu.omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok.kcwu thvu hm, aqk ck zuuwuj kh lopu eckkeu ussudk hm wv.aonncmz.ok mcmukg lu toz wqdl klu zowu oz ok scskg.ok mcmukg - mcmu klug aunom kh doee lcw tuee - yvuzuvpuj; aqk qmdlomnuj thqej lopu auum muovuv klu wovr.kluvu tuvu zhwu klok zlhhr klucv luojz omj klhqnlk klcz toz khh wqdl hs o nhhj klcmn; ck zuuwuj qmsocv klok omghmu zlhqej yhzzuzz(oyyovumkeg) yuvyukqoe ghqkl oz tuee oz(vuyqkujeg) cmubloqzkcaeu tuoekl.ck tcee lopu kh au yocj shv, klug zocj.ck czm'k mokqvoe, omj kvhqaeu tcee dhwu hs ck !aqk zh sov kvhqaeu loj mhk dhwu; omj oz wv.aonncmz toz numuvhqz tckl lcz whmug, whzk yuhyeu tuvu tceecmn khshvncpu lcw lcz hjjckcuz omj lcz nhhj shvkqmu.lu vuwocmuj hm pczckcmn kuvwz tckl lcz vueokcpuz(ubduyk, hs dhqvzu, klu zodrpceeu - aonncmzuz), omj lu loj womg juphkuj ojwcvuvz owhmn klu lhaackz hs yhhv omj qmcwyhvkomk sowcecuz.aqk lu loj mh dehzu svcumjz, qmkce zhwu hs lcz ghqmnuv dhqzcmz aunom kh nvht qy.klu uejuzk hs kluzu, omj aceah'z sophqvcku, toz ghqmn svhjh aonncmz. tlum aceah toz mcmukg - mcmu lu ojhykuj svhjh oz lcz lucv, omj avhqnlk lcw kh ecpu ok aon umj; omj klu lhyuz hs klu zodrpceeu - aonncmzuz tuvu scmoeeg jozluj.aceah omj svhjh loyyumuj kh lopu klu zowu acvkljog, zuykuwauv 22mj. ghq loj aukkuv dhwu omj ecpu luvu, svhjh wg eoj, zocj aceah hmu jog; omj klum tu dom dueuavoku hqv acvkljog - yovkcuz dhwshvkoaeg khnukluv.ok klok kcwu svhjh toz zkcee cm lcz ktuumz, oz klu lhaackz doeeuj klu cvvuzyhmzcaeu ktumkcuz auktuum dlcejlhhj omj dhwcmn hs onu ok klcvkg - klvuu ";
    map<char, char> mp = {
        {'a', 'b'},
        {'b', 'x'},
        {'c', 'i'},
        {'d', 'c'},
        {'e', 'l'},
        {'f', 'j'},
        {'g', 'y'},
        {'h', 'o'},
        {'i', 'q'},
        {'j', 'd'},
        {'k', 't'},
        {'l', 'h'},
        {'m', 'n'},
        {'n', 'g'},
        {'o', 'a'},
        {'p', 'v'},
        {'q', 'u'},
        {'r', 'k'},
        {'s', 'f'},
        {'t', 'w'},
        {'u', 'e'},
        {'v', 'r'},
        {'w', 'm'},
        {'x', 'z'},
        {'y', 'p'},
        {'z', 's'}};
    for (int i = 0; i < cText.length(); i++)
    {
        if (cText[i] == ' ')
        {
            continue;
        }
        if (mp.count(cText[i]))
            cText[i] = mp[cText[i]];
    }
    cout << cText << endl;
    return 0;
}