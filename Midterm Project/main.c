#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void art();
void intro();
void start();
void startleft();
void streamwoods();
void drown();
void narrowpth();
void wait1();
void wait2();
void wait3();
void wait4();
void startmid();
void startright();

void intro() //Done
{
    char name[32];
    printf("Welcome to our Midterm Project!!!\n\n\n");
    sleep(5);
    printf("By: Lucas Harris, Sharon De La Garza, and James Sanders\n\n\n");
    sleep(5);
    printf("Welcome to our text based adventure game\n");
    sleep(5);
    printf("What is your name?\n");
    scanf("%31s",&name);
    printf("Your name is: %s\n\n\n",name);
}

void art()
{
    const char *art =
":+=+*=:.:~=~---.......................................~<=-*(..*[~>>=~~+=++-~==++++++++*+++**^)]})=*.\n"
"~{##[#{#{[}%%%@@@(-<}%}+>>+<^<)(<^>*^([#@@{.:}[@}@@@@@{--:.::*@@~>@{{#{{{{{{#{#{{{###{##{{##@}.)]=+.\n"
".{%@#@@#[>]%##{#(:=>{@@}%@<]])]^-::++@@@%@~~@@~<*+<[...-~~~+*~.:::@@##{{{{{{{{#####{{#{##%@@@%]{*[<.\n"
":]]@%%%[)[<%{%{#@#@{^+@@@%%%[*^=[@@@@@@.+@*@{*+~=~::-++=+***=*++=.^@#{{{{{{{{{{{%@@@@@@@%@<*])%[(<+.\n"
"~)()][%+{@@{[}}##%@@@%####@%{@@@@@@#@%@~~]-*^>+*+=*+**+*******+**=@@@#{}{{{#{{#%@>{@@#@@@@@@<^>=-*).\n"
"=])%#]%]({#{%{{{#####{{}{{{{%#%@}}%]])%@@<-~=~+**^><)<>>>>^***++=..*]@##@@@%{{#@)}):.....[(:=])<[%@.\n"
"*@@%%%%{)~^[#{{({%#{{}{{{{#{{[{[>#[][@@@=*>*===>(()^==*^**^******>><@@@@@++@%@@##-:.~===::=){#@@)^=.\n"
"+###{{}#@:}@#{([(>[#{{{{{]}}{{##@}:*@(~-=~=*+^(])>**+***^^^**^^^<^*~:.....+@@[)^}@=~+*^^*+***<]++*+.\n"
"~{{{{}#%{{){###%#>]{#}}}{}{{}{}{#*]%@@^::*<(#@%]>^****+^*^>>><))<<+=:::+@)]##..-<@<)<><<<<*^>)>+**^.\n"
"~##{{}}{#%#[(#}%#}##}}{{{}{{{{{{#{{%[@@}*)^*)<*+^^*>><<<)<>))((]<>-~--::{@@@@<])-(][[()<^^**+^=^^^>.\n"
"~}[}}}{{{{###[({#])}###[}{{}}{{%@@@@>[=%%@<^+*+==+*^^^^><)((((()>(@#^@@@@@@[{=<<<*^)<<>><>^*+**>>^^.\n"
"~{{{{{{{}}{{][}[{#}]}<<}{{#%%}{^~::=^#}@@{]@#+*^+==+*^<<))))<*..::**@@@<#+-#@<-=*^*~><)<<<<>^^+^<)<.\n"
"~}{}{[[}###{)[{#}}{{(<]#{@@}%@@@%%}}[%%#@)#=-=*^^^*^^<^<>^+**+:#%%@@]:[=:--.:-*>*+^+*^<<<<>>))^*<)).\n"
"~}}{}}{{#(%}{#{@@@@%@#}%@%.::<:-]@%%##^*-:::-~*^>>>>>^***+++=+<@@%@...:<<=-**+~=**^**+=~=*<[}])}{{#-\n"
"-}}}}}))+#][]^-+:->%%}{<]~:=**>^^<##[}%)::-~+^))(()()))(((>*=--]]{%~=+^^<^*+=+**^**+=**^<(*~+)%}(}}.\n"
"-}}}{##%(*+(+{}{=:::-+]]{{[[)*++*>><<{{#%%@@#])))<)][}]][]#@@@@%#}%>)[)*=*>^>>>>>><)((]]<===<**]#](.\n"
"-}}}{(+~)#{##{##%@@@^^>{@)<{@%#%#%}()}#{@%>({{]]}](]<<)<*=:::+>#%##<::-+*^<)(]]]([]()>-:::=++*(()<].\n"
":[}[](#%%{}}}[]]{{^:}@@}^(]%#%%]:)[}{%[:*@@<~>^>)(()++==+**+++~>#%>#]}%](<((>^**=--::~<@@@@@##{##{}.\n"
"-}}}}{(^[}}######}}%)^]%%}*)=)(]]#{}}]~*=::-:::-~~--~+^^>>>>^*^^[%]]]>=+^::::~*>*<%@@@%#{}[[}}[[[[[.\n"
":[[}([}]<)(~>]^+]#[[-~--+(%]>[#%{](]((]{]::::---:::~+**+*+~+++(=-<:::--[#{(<)^**<}#{}[][[][[]]]]][[.\n"
"-#{}[[[[}[}{>^>^~]{#%%}{[{%}})<<[}][}{{#%%@%[][(][())<<[#>*+*+~=+-+^>][<[#{)]}#@#{[](]][]]]]][[]}[[.\n"
".]][][[[[}]}{#{#{}[^(}{{(^::)(<^(##%%}{#%##@%%%##{{#@%}}]@@%{%]((<^*+=-=^#}{{{}}[[]]]]]]]]]]]]]]][[.\n"
".^(]}]]]](]][}{}[}[#%{[][{@~:~>((<+--+]++<><{@@(##^::::::::@@%{*^>^^)<(>){#{}]((<[[[[]]][((]][]]][[.\n"
":%%%@%##@@%#()(]{#[-:+)[}{{{%]}><(+[%#^=~~~~:::.-@{----~~~::({}^[#@#}%}<+::+][}{%##[}}}[[}}{{{#{{#[.\n"
".%]==+[[-::%#]*)>*(#[*+)]*=*)}#%##{])>(}[^*<><(]<>]}{]}###[^:--=-:<(}{^=)}}{%@@>+*^[](}#{}<<=*>*><*.\n"
".-:-==~=*<*---+(<::~(#{}}[}}]<-=~[(--::-)(]{}}(>=::+]%@})(<*=~~~-<}}]()}%<>*::-<<=::=-::-(]}{}}}}]<.\n"
".***~~~++++<[}###{[>[(<^<(((]}}[((][[]][}[](()<[}}#%{<-><)#[}{{#{[(<<(]{~:-:~-::-*<]}[#%%[)^*--:=>(.\n"
":%%#%@@#@@{}~:::){%{{([[[]]][[[][(:~<]}{[^^)^^>[{[{]~::=~([][}}}[[[]]]][<((<)([#}}}]>>*::--=^<[{{]^.\n"
".:>]]>:---]}#{}(*--+>^<<))))^^))(}{]]<))(]({}})~+[^:<#%#{[()(<>>))<>><(][}{{}}](}(^)<^)}%@%#{{((<<).\n"
".{{(]}#{[(^~~~-~^<(<[][]]][}()]((>]{(.+>:+::-**>^-*{{+=**)())))()<)(]]]()>*>>)()>(]{{{{(~:->))<<((].\n"
".))((())([[#{#{[(<>>])(+}(^*-)(([{{^~<(]]()(<**^>>^<]])](]((()())][}])>](]][[[[])<>~+**>({}]([[[[[[.\n"
".^)><(}{[]<^)#(})>))(>^-+++^*<>>~:.*}[(><)(][]}#{}[))))))<>)((]((<~:==^<<>]+^-<([[}}[][[[(()]^+>]*^.\n"
".(])(>-<><(^:.+<]]([}><)[}[((]((]]]<>+^^)^<^*<+^++)))([>((^>^-++<[[{}}<>*)][{}(++=**^*+>=*)<<<><)>).\n"
".>>(<>(+)~><]>)(>*^*:>]([](([[]]]()))<]])<[)<)]]>**^)(>^(<>=--~-:..-=~-++-:....-~~--=+=::-~::...:-~.\n"
".@%%@@@@@@@@@@##%%#{}})>^^*>>^^><<(([[(]()>^*=-~+%%+~~=*>>+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n"
"-===~~----~~~~====+**^>>>><<<^>^^**=--------*}@@@-~}@@{^---+<::....=.~..:.^.:*.))<>>((>^^^^>>>[]<>*-\n"
":^**^>>>><<>><<<<)][<<<<()^~~----:::~<#@@@@@@=~.+>>*:~=@@@@@@..[%}{.()@@@%}-{@(@}{{]{%#{#]()>>^**>]:\n"
":)))(<)())>]()>>+~~~------**]%%{{@@@@@@@@)...+*)]<<))*+...=@@]@@@:-(@.@##{>}%>:*=:((%{{{{}}{{}]}}[}:\n"
":<[)><>~=-=-~~+=<))))#}{%][)(])][#@@@@{..~^>*^<])<<<<<>*>^:}%@@@@@@<]*[*[+@>}>(}#}@}(>><<]([[{#%%@%:\n"
"-<*-^*=}#@]@#}[}>)#}+)]][){%@@@@@@]...:^)>^*<((()<<<)))<^^=)*-.:=%@@@@%@{}<<]<(+]<*=>^<](^](<-~~--+-\n"
"-+)%}}{#]^])>@@%@##@%@@@@@@@)@@(..-~^)()>>>))<))<<<>))<<<>>^^<>*~-:.]@@}@@@@@@@[@#}##{@+>[>)#[}(}*>-\n"
":@@{<@{}@@#@@@#:@@@@@@@{@@{@...:+><)(<<>^>)<)])<<(<<))())<>^>>>))<>+-:.:@@@@@%@@@@@@~{@%{%#@}[@<#%@:\n"
"~(=@@@[%@]<%)@#[@@@]@>@@@..-~^<<))))<>>><)<)]()())>))<<)()(<<>><))(<<)>+~..}@@)#%@@@{}@]{](@%##@@~)~\n"
"~@@[({<(*[-@@@@@@@@@@]..:*><<)<)(<<<<><)<)<()[<<)<))<<])))(<)<^<<<>))>)<<)^=..<@@@@@@@@@@:(^^[[]<@@~\n"
"^(]^[@*]^@@@<<@@@{...~*)<<<)](()<><<<<<<)<([))<<(<>)<)<(())()))>><>)<)(()<)<)^+...}@@@>+@@@(<*@#><(>\n"
"^@@#[@@@@}@@@@+..~*>(<<))()(<)<>)>)>>>)>(<])]<(((>>))<)[<(>)<))<>)><<<)<())<#>))>^+..*#@@@#@@@@%]@@>\n"
"@@@#@@@@@@^+.:>><)<<)))))()(<<)(>))<(<<<)()^))](]><)))<)>)()](>])<(><)<<<(((<<((())))[:-^^@@@@@@@@@@\n"
"~~%@@@)..:+^*(>))((<()((()<<))>><)>)<>[((])}^)((]<>])<)>[()<<]<)<<<><>))<<)<(())))(())]>^*~..>@@@%^:\n"
"#@@+.:+)<(<>))))(<])}))>)>())>())))<>())])(<)()((<>))<))(()(>(((<)<(<<<)))>(><)[[]))<)](]>](]^-.~@@@\n"
"..:=<)^))<(<((]>((()<<()<]<)<<)())<(])<<)<]<<[)()><)<<(<<(<]^><(])))))<)<<]))(<))<]])]()<]()]>[(*::.\n"
".<])(])])<}<)()<(<]>))>(])<<())<<<)(>([])])>)))(]><])<<(>])()])<()))(])(<<)(]^))>()<>(](<}<]]()()[(.\n"
".(<(())([><(([)[((])))]<)))))(<(<)]>)())>{<((](](<<)((<])<[<(<(<<()(^)()()<)<])))])]})](()*((<(])<(.\n"
".){][((<>])((])))(<(())<)^()(<<<((<])[<<][^<<))))><<()>))<][<<(>>^>()<<<))>(<<](]>)(<()]][[)(]]}(%[.\n"
".))+*>^[)^%{(>)])<]())(()(()<)<]]>)[<[[<((<]]])[(<)((<(()<()>}])@@^]]<<()((<(]<<(]><))>])[[]((>])]{.\n"
"....................................................................................................\n";

printf("%s", art);
}

void start() //Done
{
    int choice = 0;
    art();
    printf("You start on a wide country road in the middle of the woods\n\n\n");
    printf("Ahead there are three paths, do you take the left narrow path, continue down the wide country road, or turn right toward the small beaten trail?\n\n");
    printf("Please make your selection\n");
    printf("1. for left\n");
    printf("2. for straight\n");
    printf("3. for right\n");
    scanf("%d",&choice);
    if (choice == 1)
        startleft(); //James
    else if (choice == 2)
        startmid(); // Lucas
    else if (choice == 3)
        startright(); // Sharon
    else
        printf("Please make another selection\n");
        start();

}

void startleft() //Done
{
    int choice = 0;
    printf("As you head down the narrow path, you see ahead a slow moving stream\n");
    printf("As you approach the stream you can see a small path on the other side that leads into the woods\n");
    printf("You also notice that the stream is very calm and slow, you could easily cross it if you wish\n");
    printf("Do you wish to cross the stream?\n");
    printf("Please make your selection\n");
    printf("1 for crossing the stream\n");
    printf("2 for continuing down the path\n");
    printf("3 for waiting by the stream\n");
    scanf("%d",&choice);
    if (choice == 1)
        streamwoods();
    else if (choice == 2)
        narrowpth();
    else if (choice == 3)
        wait1();
    else
        printf("Please make another selection\n");
        startleft();
}

void streamwoods() //Done
{
    int choice = 0;
    printf("You begin to approach the stream to take a closer look at the water, it looks as safe to cross\n");
    printf("Are you sure you would like to cross?\n");
    printf("1. for continuing on\n");
    printf("2. for returning to the path\n");
    scanf("%d",&choice);
    if (choice == 1)
            drown();
    else if (choice == 2)
            startleft();
    else
        printf("Please make another selection");
        streamwoods();

}

void drown() //Done
{
    printf("You swallow some water and contract dysentery\n");
    printf("You have died of dysentery\n\n\n");
    printf("GAME OVER!");
    exit(0);
}

void narrowpth() //Needs to be fleshed out
{
    printf("You continue down the narrow path\n");
    printf("after a long time you see a familiar sight\n");
    printf("You appear to be back where you started");
    sleep(3);
    start();
}

void wait1()
{
    int choice = 0;
    printf("You decide to wait by the stream\n");
    printf("It is a very calm and relaxing stream\n");
    printf("do you want to contine to wait or go down one of the other paths?\n");
    printf("1. Cross the stream \n2. Continue down the narrow path \n3. Keep waiting\n");
    scanf("%d",&choice);
    if (choice == 1)
        streamwoods();
    else if (choice == 2)
        narrowpth();
    else if (choice == 3)
        wait2();
    else
        printf("Please make another selection");
        wait1();

}

void wait2()
{
    int choice = 0;
    printf("You have decided to keep waiting by the stream\n");
    printf("you are getting very relaxed\n");
    printf("do you want to contine to wait or go down one of the other paths?\n");
    printf("1. Cross the stream \n2. Continue down the narrow path \n3. Keep waiting\n");
    scanf("%d",&choice);
    if (choice == 1)
        streamwoods();
    if (choice == 2)
        narrowpth();
    if (choice == 3)
        wait3();
    else
        printf("Please make another selection");
        wait2();
}

void wait3()
{
    int choice = 0;
    printf("You have decided to keep waiting by the stream \nYou are feeling very, very tired \nYou decided to sit down by the stream under a tree");
    printf("do you want to contine to wait or go down one of the other paths?\n");
    printf("1. Cross the stream \n2. Continue down the narrow path \n3. Keep waiting\n");
    scanf("%d",&choice);
    if (choice == 1)
        streamwoods();
    if (choice == 2)
        narrowpth();
    if (choice == 3)
        wait4();
    else
        printf("Please make another selection");
        wait3();
}

void wait4()
{
    printf("You have fallen fast asleep\n\n");
    sleep(3);
    printf("You wake up to find you in your own bed\n\n");
    sleep(2);
    printf("You start to recall, you had been awake for days working on your midterm project and have finally finished it last night\n\n");
    sleep(3);
    printf("We hope you had a fun time!\n\n");
    sleep(2);
    printf("Game Over");
    exit(0);
}

void startmid()
{
    int choice = 0;
    printf("You have chosen to go down the wide country road\n");
    printf("After a long walk you have finally made it to a large brick house on a farm!\n");
    printf("A kind old lady comes out to meet you with her younger son, they usher you in to join them for dinner\n");
    printf("With light fading after dinner they ask you would you like to stay or leave and go through the dangers of the night? 1 to stay the night, 2 to leave\n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("They show you to your bed in the back of the house away far away from everyone else\n");
        printf("When they leave they lock the door leaving you screaming for help. 3 to calm down and give up, 4 to keep fighting\n");
        scanf("%d", &choice);
    if(choice == 3){
        printf("If you chose to calm down you were never heard from again\n");
        printf("GAME OVER");
        exit(0);
    }
    if(choice == 4){
        printf("If you chose to keep fighting they come back and yell at you to stop screaming as they can not fall asleep like this\n");
        printf("You tell them to simply unlock the door and you promise you will not leave. They do so having out smarted them you have a choice. 5 wait to leave the room, 6 run out of the room now\n");
        scanf("%d", &choice);
    }
    if(choice == 5){
        printf("Waiting has paid off they passed out giving you time to sneak out\n");
        printf("You have made it out good job. GAME OVER");
        exit(0);
    }
    if(choice == 6){
        printf("Being brash has led to your end\n");
        printf("You have lost good try. GAME OVER");
        exit(0);
    }
    }
    if(choice == 2){
        printf("They wave you goodbye as you continue on your journey you come across a waterfall with a cave under it\n");
        printf("After getting washed up you head in the cave. There is a  family of bears in there. 7 you go in, 8 you run away\n");
        scanf("%d", &choice);
    if(choice == 7){
            printf("The family of bears are super nice to you they feed you and hide you for the night\n");
            printf("You leave in the morning heading on your way to the end of the road\n");
            printf("At the end of the road there is a Leprechaun. 9 interact with him, 10 run away");
            scanf("%d", &choice);
    }
    if(choice == 9){
            printf("He gives you a pot of gold making you the richest person on the planet\n");
            printf("GAME OVER");
            exit(0);
}
    if (choice == 10){
            printf("You are not the brightest who does not want free money");
            printf("GAME OVER");
            exit(0);
    }
    if (choice == 8){
            printf("You are back out in the freezing night with no where to go\n");
            printf("A pack of hungry wolves comes across you. 11 you fight back, 12 you give up and let them have you\n");
            scanf("%d", &choice);
    }
    if(choice == 11){
            printf("You die\n");
            printf("GAME OVER\n");
            exit(0);
        }
    if (choice == 12){
        printf("You die\n");
        printf("GAME OVER\n");
        exit(0);
}
}
}

void startright()
{
    int choice = 0;

    printf("You walk down the trail to the right. As you continue, the forest thickens, and darkness spreads. \n");
    printf("Suddenly, you hear noises coming from the bushes beside you. \n");
    printf("You turn to investigate, and a strange creature with glowing eyes jumps out at you! \n");

    printf("What do you try to do? \n");
    printf("1 - Run for your life! \n");
    printf("2 - FIGHT! \n");
    printf("3 - Slowly back away and hide by a nearby tree. \n");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You run back down the trail as fast as you can. \n");
        printf("The creature chases you, tailing close behind. \n");
        printf("Unfortunately, the creature is much larger than you are, and it does not take long for it to catch up to you. You have lost the race. \n");
        printf("GAME OVER \n");
        exit(0);
    }

    else if (choice == 2)
    {
        printf("You let out a battle cry and charge at the creature! \n");
        printf("The creature growls in return and charges back, knocking you off your feet. \n");
        printf("It is much stronger than you, and you lose the fight. \n");
        printf("GAME OVER \n");
        exit(0);
    }

    else if (choice == 3)
    {
        printf("You quickly move behind a nearby tree and hold your breath. \n");
        printf("The creature approaches slowly. It sniffs the air for a minute, then turns to leave. \n");
        printf("You wait in silence until you're sure the creature is gone, and then you continue on your way until you make it out of the forest. \n");
        printf("You are safe. \n");
    }
    else
    {
        printf("ERROR. PLEASE MAKE ANOTHER SELECTION. \n");
        startright();
    }
    exit(0);
}

int main()
{
    //intro();
    start();
}
