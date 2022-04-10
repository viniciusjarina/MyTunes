#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "Music.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Data;

using namespace Microsoft::UI::Xaml::Media::Imaging;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MyTunes::implementation
{
	MainWindow::MainWindow():
		m_musics(winrt::single_threaded_observable_vector<IInspectable>())
	{
		InitializeComponent();

		ExtendsContentIntoTitleBar(true);
		
		// TODO: Load async
		LoadMusicList();
	}

	void MainWindow::RaisePropertyChanged(hstring const& propertyName)
	{
		m_propertyChanged(*this, PropertyChangedEventArgs(propertyName));
	}

	void MainWindow::LoadMusicList()
	{
		albumList().Items().Append(make<Music>(
			L"Greatest Hits",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music115/v4/01/69/5f/01695f6c-541d-faef-ac67-d1033b11c79a/source/200x200bb.jpg",
			L"Don't Stop Believin'",
			L"Journey"));

		albumList().Items().Append(make<Music>(
			L"Greatest Hits",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/93/b6/c7/93b6c722-efd5-2163-fd6f-2b72c05f9c41/source/200x200bb.jpg",
			L"Hey, Soul Sister",
			L"Train"));

		albumList().Items().Append(make<Music>(
			L"Sorry for Party Rocking (Deluxe Version)",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music126/v4/cf/6c/46/cf6c4640-0666-3c67-82fc-a817a86c66cb/source/200x200bb.jpg",
			L"Party Rock Anthem (feat. Lauren Bennett & GoonRock)",
			L"LMFAO"));

		albumList().Items().Append(make<Music>(
			L"Night Visions",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/46/fe/19/46fe1902-91de-8d84-84cd-c4b7983e939c/source/200x200bb.jpg",
			L"Radioactive",
			L"Imagine Dragons"));

		albumList().Items().Append(make<Music>(
			L"Making Mirrors (Deluxe Version)",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music125/v4/47/c4/a2/47c4a2fa-4001-ea50-d109-f81d32778ec1/source/200x200bb.jpg",
			L"Somebody That I Used to Know (feat. Kimbra)",
			L"Gotye"));

		albumList().Items().Append(make<Music>(
			L"We Sing. We Dance. We Steal Things",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/15/d7/28/15d72897-ad11-897c-81a6-986a4fd901ca/source/200x200bb.jpg",
			L"I'm Yours",
			L"Jason Mraz"));

		albumList().Items().Append(make<Music>(
			L"The Truth About Love",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/82/24/33/82243301-2533-cbf2-2ff9-1939170220c9/source/200x200bb.jpg",
			L"Just Give Me a Reason (feat. Nate Ruess)",
			L"P!nk"));

		albumList().Items().Append(make<Music>(
			L"Torches",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music115/v4/87/05/ec/8705ec42-e7fa-39a5-b261-5b8b7d5caa7a/source/200x200bb.jpg",
			L"Pumped Up Kicks",
			L"Foster the People"));

		albumList().Items().Append(make<Music>(
			L"PRISM (Deluxe Version)",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music113/v4/b7/52/f9/b752f9fc-6a70-71d0-87ad-c1b6dcc36a39/source/200x200bb.jpg",
			L"Roar",
			L"Katy Perry"));

		albumList().Items().Append(make<Music>(
			L"How to Save a Life",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music114/v4/7a/53/7b/7a537bf7-ca24-c15f-e784-c39396bea9a6/source/200x200bb.jpg",
			L"How to Save a Life (New Version)",
			L"The Fray"));

		albumList().Items().Append(make<Music>(
			L"Megalithic Symphony",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music125/v4/5e/07/2b/5e072b0d-bec4-b9d3-06d1-4d0430ec65ef/source/200x200bb.jpg",
			L"Sail",
			L"AWOLNATION"));

		albumList().Items().Append(make<Music>(
			L"All the Right Reasons",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music114/v4/df/b0/a8/dfb0a81b-d159-45f8-8553-23de9b2f6f04/source/200x200bb.jpg",
			L"Rockstar",
			L"Nickelback"));

		albumList().Items().Append(make<Music>(
			L"Ho Hey - Single",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music124/v4/99/28/d3/9928d33f-5e20-8536-b5ae-8946c4327926/source/200x200bb.jpg",
			L"Ho Hey",
			L"The Lumineers"));

		albumList().Items().Append(make<Music>(
			L"Doo-Wops & Hooligans (Deluxe Version)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/fa/78/be/fa78bee5-4dde-ecda-b6c4-a0918c18db4f/source/200x200bb.jpg",
			L"Just the Way You Are (feat. Lupe Fiasco) [Remix] [Bonus Track]",
			L"Bruno Mars"));

		albumList().Items().Append(make<Music>(
			L"Kiss",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music114/v4/97/e1/cb/97e1cba5-9197-3194-6dc6-27bf0c2c0c13/source/200x200bb.jpg",
			L"Call Me Maybe",
			L"Carly Rae Jepsen"));

		albumList().Items().Append(make<Music>(
			L"Some Nights",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/13/b4/d5/13b4d5b3-43e1-bdfb-312e-01af1612acce/source/200x200bb.jpg",
			L"Some Nights",
			L"Fun."));


		albumList().Items().Append(make<Music>(
			L"One of the Boys",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music116/v4/22/1b/12/221b127f-aeb6-0349-d990-e7878cc06682/source/200x200bb.jpg",
			L"Hot n Cold",
			L"Katy Perry"));

		albumList().Items().Append(make<Music>(
			L"Teenage Dream (Deluxe Edition)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music116/v4/ad/c0/95/adc0959d-a6db-4cc7-fa4c-d85b5f8b4bbb/source/200x200bb.jpg",
			L"California Gurls (feat. Snoop Dogg) [MSTRKRFT Main Mix]",
			L"Katy Perry"));

		albumList().Items().Append(make<Music>(
			L"Up All Night (Deluxe Version)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/75/34/72/75347247-3ab2-c8f9-976d-fac70012f7dc/source/200x200bb.jpg",
			L"What Makes You Beautiful",
			L"One Direction"));

		albumList().Items().Append(make<Music>(
			L"Fearless",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music115/v4/c8/78/15/c87815aa-0c6f-c4ad-2eaa-bd36d1dd3862/source/200x200bb.jpg",
			L"You Belong With Me",
			L"Taylor Swift"));

		albumList().Items().Append(make<Music>(
			L"We Are Young (feat. Janelle Monáe) [Alvin Risk Remix] - Single",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music/v4/a0/a8/ec/a0a8ec5e-76bd-c931-53f3-fbb3c3c07164/source/200x200bb.jpg",
			L"We Are Young (feat. Janelle Monáe) [Alvin Risk Remix]",
			L"Fun."));

		albumList().Items().Append(make<Music>(
			L"Stronger (Deluxe Version)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music/v4/fb/08/5c/fb085c34-9629-f399-3507-96e2b06e7aac/source/200x200bb.jpg",
			L"Stronger (What Doesn't Kill You)",
			L"Kelly Clarkson"));

		albumList().Items().Append(make<Music>(
			L"Unorthodox Jukebox",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/65/9b/cb/659bcb62-7cb0-d81c-6bc8-500153d2cfd2/source/200x200bb.jpg",
			L"Locked Out of Heaven",
			L"Bruno Mars"));

		albumList().Items().Append(make<Music>(
			L"Overexposed (Deluxe Version)",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/69/32/07/69320790-8ffb-df50-1fb9-4ced6829d0d5/source/200x200bb.jpg",
			L"Payphone (feat. Wiz Khalifa)",
			L"Maroon 5"));

		albumList().Items().Append(make<Music>(
			L"Gangnam Style - Single",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/cf/73/16/cf73164d-28b8-6d15-1fbb-fc0943a597c8/source/200x200bb.jpg",
			L"Gangnam Style",
			L"PSY"));

		albumList().Items().Append(make<Music>(
			L"Ocean Eyes",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music125/v4/8a/e5/7c/8ae57c40-c0d4-a8c5-3487-de1c71e18431/source/200x200bb.jpg",
			L"Fireflies",
			L"Owl City"));

		albumList().Items().Append(make<Music>(
			L"The World from the Side of the Moon (Deluxe)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music124/v4/66/13/52/661352ae-9287-d587-f87e-639139a81b6c/source/200x200bb.jpg",
			L"Home",
			L"Phillip Phillips"));

		albumList().Items().Append(make<Music>(
			L"Eyes Open (Bonus Track Version)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music125/v4/11/61/01/116101e2-46c2-4a82-6963-2ed850cfd0db/source/200x200bb.jpg",
			L"Chasing Cars",
			L"Snow Patrol"));

		albumList().Items().Append(make<Music>(
			L"Fallen",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/a6/3b/06/a63b0673-8235-dbfd-bb2b-074e6d8a8e2e/source/200x200bb.jpg",
			L"Bring Me to Life",
			L"Evanescence"));

		albumList().Items().Append(make<Music>(
			L"Nothing But the Beat",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music114/v4/b7/73/13/b773137e-d201-6cbb-a6b9-7bd2145b47cb/source/200x200bb.jpg",
			L"Titanium (feat. Sia)",
			L"David Guetta"));

		albumList().Items().Append(make<Music>(
			L"Bleeding Love - Single",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/6e/92/10/6e9210ee-dcf9-fad4-1d08-f0c77b1613bc/source/200x200bb.jpg",
			L"Bleeding Love",
			L"Leona Lewis"));

		albumList().Items().Append(make<Music>(
			L"The Sound of Madness (Bonus Track Version)",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music124/v4/a9/d8/8a/a9d88ae4-4837-76d3-1edf-662a6b254b8c/source/200x200bb.jpg",
			L"Second Chance",
			L"Shinedown"));

		albumList().Items().Append(make<Music>(
			L"Continuum",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music124/v4/a9/5c/65/a95c653b-3265-145a-db68-086bea3ee876/source/200x200bb.jpg",
			L"Waiting On the World to Change",
			L"John Mayer"));

		albumList().Items().Append(make<Music>(
			L"Random Access Memories",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/de/89/8c/de898cc5-2637-041b-ee17-fce29cdf9a7b/source/200x200bb.jpg",
			L"Get Lucky (feat. Pharrell Williams & Nile Rodgers)",
			L"Daft Punk"));

		albumList().Items().Append(make<Music>(
			L"When the World Comes Down (Deluxe Edition)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music115/v4/6e/11/db/6e11db50-bf36-b276-8cbb-72c8966a64c9/source/200x200bb.jpg",
			L"Gives You Hell",
			L"The All-American Rejects"));

		albumList().Items().Append(make<Music>(
			L"Blurred Lines",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music125/v4/1c/72/05/1c720527-689f-05d3-9968-30f678f5c939/source/200x200bb.jpg",
			L"Blurred Lines (feat. T.I. & Pharrell)",
			L"Robin Thicke"));

		albumList().Items().Append(make<Music>(
			L"Appetite for Destruction",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music125/v4/0f/e8/54/0fe8541b-37c7-4b5f-7160-19416e848908/source/200x200bb.jpg",
			L"Sweet Child O' Mine",
			L"Guns N' Roses"));

		albumList().Items().Append(make<Music>(
			L"Night Visions",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/46/fe/19/46fe1902-91de-8d84-84cd-c4b7983e939c/source/200x200bb.jpg",
			L"It's Time",
			L"Imagine Dragons"));

		albumList().Items().Append(make<Music>(
			L"Some Hearts",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music124/v4/ce/84/64/ce846458-deb0-a759-2ba9-ff7dc4784124/source/200x200bb.jpg",
			L"Before He Cheats",
			L"Carrie Underwood"));

		albumList().Items().Append(make<Music>(
			L"Midnight Memories (Deluxe Edition)",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music115/v4/4c/0e/a8/4c0ea826-aba1-38cd-a1db-74ad5443f7f6/source/200x200bb.jpg",
			L"Story of My Life",
			L"One Direction"));

		albumList().Items().Append(make<Music>(
			L"The Heist",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music125/v4/5e/f0/0d/5ef00d7a-690b-421b-78a3-3aac274b34be/source/200x200bb.jpg",
			L"Thrift Shop",
			L"Macklemore & Ryan Lewis"));

		albumList().Items().Append(make<Music>(
			L"Save Rock and Roll",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music115/v4/ec/60/6b/ec606b24-9f84-9768-faec-1de6e0709466/source/200x200bb.jpg",
			L"My Songs Know What You Did In the Dark (Light Em Up)",
			L"Fall Out Boy"));

		albumList().Items().Append(make<Music>(
			L"My Head Is an Animal",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music115/v4/52/ac/22/52ac225b-4dee-353a-aed4-eae04073f4cc/source/200x200bb.jpg",
			L"Little Talks",
			L"Of Monsters and Men"));

		albumList().Items().Append(make<Music>(
			L"Girl On Fire",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music114/v4/12/ba/a8/12baa850-698a-0fa3-89d3-a675628c690b/source/200x200bb.jpg",
			L"Girl On Fire (feat. Nicki Minaj)",
			L"Alicia Keys"));

		albumList().Items().Append(make<Music>(
			L"Lungs",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/70/a6/91/70a69177-c1cd-bb19-412e-4ffe7e3c579f/source/200x200bb.jpg",
			L"Dog Days Are Over",
			L"Florence + the Machine"));

		albumList().Items().Append(make<Music>(
			L"Extreme Behavior",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/8f/2b/9e/8f2b9e21-9753-9498-6c9f-c4a85551d2b9/source/200x200bb.jpg",
			L"Lips of an Angel",
			L"Hinder"));

		albumList().Items().Append(make<Music>(
			L"Replay - Single",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music/v4/9c/f8/6a/9cf86a81-55bb-1738-f62e-b69fcae303bc/source/200x200bb.jpg",
			L"Replay",
			L"Iyaz"));

		albumList().Items().Append(make<Music>(
			L"Little Voice",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music115/v4/40/a5/f4/40a5f474-98af-e881-37eb-dfd513968d1d/source/200x200bb.jpg",
			L"Love Song",
			L"Sara Bareilles"));

		albumList().Items().Append(make<Music>(
			L"B.o.B Presents: The Adventures of Bobby Ray (Deluxe Version)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music115/v4/1f/18/ae/1f18aef3-a773-40c5-c522-9cc63a8a5b9e/source/200x200bb.jpg",
			L"Airplanes, Pt. II (feat. Eminem & Hayley Williams of Paramore)",
			L"B.o.B"));

		albumList().Items().Append(make<Music>(
			L"Daniel Powter",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music/v4/b3/0d/dd/b30ddd2f-7818-f552-d3ad-032e7a31878f/source/200x200bb.jpg",
			L"Bad Day",
			L"Daniel Powter"));

		albumList().Items().Append(make<Music>(
			L"15",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music125/v4/66/f6/a0/66f6a0f9-a171-412f-d086-e496e4cd5de7/source/200x200bb.jpg",
			L"Crazy Bitch",
			L"Buckcherry"));

		albumList().Items().Append(make<Music>(
			L"Greatest Hits",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/93/b6/c7/93b6c722-efd5-2163-fd6f-2b72c05f9c41/source/200x200bb.jpg",
			L"Drive By",
			L"Train"));

		albumList().Items().Append(make<Music>(
			L"Love Is a Four Letter Word (Deluxe Version)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/a8/31/91/a83191a6-a98e-052d-ba73-b28b748d44bc/source/200x200bb.jpg",
			L"I Won't Give Up",
			L"Jason Mraz"));

		albumList().Items().Append(make<Music>(
			L"Mylo Xyloto",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/b9/bf/48/b9bf48c1-916c-5ab9-baee-7929a198b9d5/source/200x200bb.jpg",
			L"Paradise",
			L"Coldplay"));

		albumList().Items().Append(make<Music>(
			L"Drops of Jupiter",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music124/v4/c1/a6/7a/c1a67a27-37ce-6fb2-f2f7-4dffcfe56b7f/source/200x200bb.jpg",
			L"Drops of Jupiter (Tell Me)",
			L"Train"));

		albumList().Items().Append(make<Music>(
			L"How to Save a Life",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music114/v4/7a/53/7b/7a537bf7-ca24-c15f-e784-c39396bea9a6/source/200x200bb.jpg",
			L"Over My Head (Cable Car)",
			L"The Fray"));

		albumList().Items().Append(make<Music>(
			L"Rokstarr (Bonus Track Version)",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/07/7a/f8/077af8fc-64ab-b9d6-e207-157fc5334e15/source/200x200bb.jpg",
			L"Dynamite",
			L"Taio Cruz"));

		albumList().Items().Append(make<Music>(
			L"Teenage Dream (Deluxe Edition)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music116/v4/ad/c0/95/adc0959d-a6db-4cc7-fa4c-d85b5f8b4bbb/source/200x200bb.jpg",
			L"Teenage Dream (Kaskade Club Remix)",
			L"Katy Perry"));

		albumList().Items().Append(make<Music>(
			L"Bad Blood (Bonus Track Version)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/35/f2/5c/35f25c6a-832b-fb4a-6394-5aa5f4e96be9/source/200x200bb.jpg",
			L"Pompeii",
			L"Bastille"));

		albumList().Items().Append(make<Music>(
			L"All the Right Reasons",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music114/v4/df/b0/a8/dfb0a81b-d159-45f8-8553-23de9b2f6f04/source/200x200bb.jpg",
			L"Far Away",
			L"Nickelback"));


		albumList().Items().Append(make<Music>(
			L"Bad Romance - Single",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music115/v4/c4/03/bd/c403bd75-1241-609e-815f-2e27a27fa03c/source/200x200bb.jpg",
			L"Bad Romance",
			L"Lady Gaga"));

		albumList().Items().Append(make<Music>(
			L"All the Right Reasons",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music114/v4/df/b0/a8/dfb0a81b-d159-45f8-8553-23de9b2f6f04/source/200x200bb.jpg",
			L"Photograph",
			L"Nickelback"));

		albumList().Items().Append(make<Music>(
			L"Merry Christmas",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music114/v4/b2/d1/86/b2d186d5-064d-a491-fbd2-d7dbc7084dba/source/200x200bb.jpg",
			L"All I Want For Christmas Is You",
			L"Mariah Carey"));

		albumList().Items().Append(make<Music>(
			L"Daughtry",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music114/v4/48/77/4d/48774d07-117c-be42-0918-b7b5ff1f8188/source/200x200bb.jpg",
			L"It's Not Over",
			L"Daughtry"));

		albumList().Items().Append(make<Music>(
			L"A Rush of Blood to the Head",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/85/3e/f0/853ef08a-f96a-61f8-f7a8-1e59af0af0cd/source/200x200bb.jpg",
			L"Clocks",
			L"Coldplay"));

		albumList().Items().Append(make<Music>(
			L"Red",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music115/v4/79/b7/e0/79b7e056-22fa-2308-f207-0eb7896ab783/source/200x200bb.jpg",
			L"22",
			L"Taylor Swift"));

		albumList().Items().Append(make<Music>(
			L"Daughtry",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music114/v4/48/77/4d/48774d07-117c-be42-0918-b7b5ff1f8188/source/200x200bb.jpg",
			L"Home",
			L"Daughtry"));

		albumList().Items().Append(make<Music>(
			L"A Fever You Can't Sweat Out",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music/v4/d8/63/29/d863296e-c8b7-644b-10c5-850230079f03/source/200x200bb.jpg",
			L"I Write Sins Not Tragedies",
			L"Panic! At the Disco"));

		albumList().Items().Append(make<Music>(
			L"The Sickness",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/ce/24/67/ce24679e-e3a2-8227-99c8-b274cec6b5d9/source/200x200bb.jpg",
			L"Down with the Sickness",
			L"Disturbed"));

		albumList().Items().Append(make<Music>(
			L"Lights",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music124/v4/df/94/2e/df942e9d-60c7-2359-cac1-303dc25d6f72/source/200x200bb.jpg",
			L"Lights",
			L"Ellie Goulding"));

		albumList().Items().Append(make<Music>(
			L"Chief",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music125/v4/6e/4d/0e/6e4d0e2d-9f34-e434-7c62-3b2605e447da/source/200x200bb.jpg",
			L"Springsteen",
			L"Eric Church"));

		albumList().Items().Append(make<Music>(
			L"Dark Horse",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music115/v4/a0/1c/96/a01c96d8-b343-17f6-7254-b47034145578/source/200x200bb.jpg",
			L"If Today Was Your Last Day",
			L"Nickelback"));

		albumList().Items().Append(make<Music>(
			L"St. Elsewhere",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music/v4/7d/01/56/7d0156be-12cd-8724-a0ca-727b1013a81d/source/200x200bb.jpg",
			L"Crazy",
			L"Gnarls Barkley"));

		albumList().Items().Append(make<Music>(
			L"Infinity On High",
			L"https://is5-ssl.mzstatic.com/image/thumb/Music125/v4/85/01/b6/8501b6a4-44e6-5c06-71b0-9adc248360b8/source/200x200bb.jpg",
			L"Thnks Fr Th Mmrs",
			L"Fall Out Boy"));

		albumList().Items().Append(make<Music>(
			L"Waking Up (Deluxe Version)",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music124/v4/8f/16/8a/8f168a66-68fb-7c64-4b18-abf8e90c4e1d/source/200x200bb.jpg",
			L"Good Life",
			L"OneRepublic"));

		albumList().Items().Append(make<Music>(
			L"The Incredible Machine",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music124/v4/8e/b1/28/8eb12826-d53d-4f1f-86b5-7dfe1261af80/source/200x200bb.jpg",
			L"Stuck Like Glue",
			L"Sugarland"));

		albumList().Items().Append(make<Music>(
			L"Lovestrong. (Deluxe Version)",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music114/v4/8b/c2/be/8bc2be1d-d855-1fd3-2fb4-6c978cdc3a4c/source/200x200bb.jpg",
			L"Jar of Hearts",
			L"Christina Perri"));

		albumList().Items().Append(make<Music>(
			L"Move Along",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music124/v4/79/b7/8a/79b78ad1-1925-bfc2-ea25-173600473516/source/200x200bb.jpg",
			L"Move Along",
			L"The All-American Rejects"));

		albumList().Items().Append(make<Music>(
			L"The Better Life",
			L"https://is1-ssl.mzstatic.com/image/thumb/Music115/v4/7b/e1/41/7be14144-13ce-957f-d1a3-032eacbc2105/source/200x200bb.jpg",
			L"Kryptonite",
			L"3 Doors Down"));

		albumList().Items().Append(make<Music>(
			L"I Kissed a Girl - Single",
			L"https://is4-ssl.mzstatic.com/image/thumb/Music116/v4/10/45/df/1045df26-a095-87a7-afa1-b15c9debda64/source/200x200bb.jpg",
			L"I Kissed a Girl",
			L"Katy Perry"));

		albumList().Items().Append(make<Music>(
			L"My World 2.0 (Bonus Track Version)",
			L"https://is2-ssl.mzstatic.com/image/thumb/Music116/v4/34/4f/9e/344f9e18-3bfa-d868-a622-99409de28694/source/200x200bb.jpg",
			L"Baby (feat. Ludacris)",
			L"Justin Bieber"));

		albumList().Items().Append(make<Music>(
			L"Slippery When Wet",
			L"https://is3-ssl.mzstatic.com/image/thumb/Music115/v4/1d/88/fc/1d88fcc4-2157-cedb-42eb-c8497425184b/source/200x200bb.jpg",
			L"Livin' On a Prayer",
			L"Bon Jovi"));

	}

}
