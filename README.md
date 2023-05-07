[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10950862&assignment_repo_type=AssignmentRepo)
# {TITLE HERE}
 
 Authors: 
 [Jackson](https://github.com/JMarolt), 
 [Kush](https://github.com/KushKM), 
 [Julian](https://github.com/jgonz671), 
 [Daniel](https://github.com/drodr211)
 
## Project Description
* Text-based RPG game with rougelite elements, where you fight through rooms to defeat monsters and earn currency to permanently upgrade your character.
* We will be using C++ with VSCode. We will be using Git/Github to share, save, edit, and finalize our code as a group. We will also be using Cmake/make allowing us to compile and run much easier. We will use Valgrind to detect whether we had any memory leaks within our code. Finally, we will use Googletest framework to test our functions/code to ensure that they work.
* The inputs will asked for through the command line interface (names, option numbers, etc.) and the outputs will be printed to the terminal using cout. We will ask the user every turn what they want to do(Attack, Run...). After each choice, the output will include(User health, monster health, user stats, the room they are in, whether there even is a monster or not). 
* Features:
  * Turn-based gameplay. This means that at the beginning of each turn, we can choose between attacking or going to a different room. If the user chooses a different room, then they will attempt to go into the room of their choice(if they have one) and if they fail, they will be attacked by the monster and lose their turn. If the user decides to attack, the entity(user or monster) with higher speed will attack first. If the user defeats the monster(s) within the room, they will forever be dead. They also have a chance to drop items and some form of currency. If the user dies, they will lose their stats and coins and be reset to the beginning. (Currently thinking on making multiple layers).
  * Increasingly difficult rooms and better rewards. As the user progresses further into the game, the monsters will have higher stats(Health, Attack Damage, Speed, and other things) making it harder to go through. As the user gets closer to the end, they will start to encounter bosses with different styles of gameplay. Once they defeat the bosses, they can advance and may receive items that the bosses were holding.
  * There will be a final boss. Once the player defeats it, they will complete the game or floor(whatever we are choosing). They can then go shopping with what they have and enter the same level or a harder level.
  * Pick a class that suits your fighting style at the start of the game. Currently, there are Cleric(Has a chance to heal itself), Wizard(Chance to inflict more damage), Rogue(Has a chance to dodge an attack), Brute(As it has less health, it does more damage).
  * Unless the player dies, they will be able to upgrade stats and buy items at a shop outside the level.
 
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 