# Practice Problems: Object-Oriented Basics

## Problem 1

- LO: (Remember) Students will recall how to create instances of a class.

```java
public class Song {

    public String title;
    public String artist;
    public int duration;

    public Song(String title, String artist, int duration) {
        this.title = title;
        this.artist = artist;
        this.duration = duration;
    }

    public Song(String title, int duration) {
        this.title = title;
        this.artist = "Unknown Artist";
        this.duration = duration;
    }

    public void play() {
        int secs = this.duration % 60;
        int mins = this.duration / 60;
        String played = "Played \"" + this.title
                        + "\" by " + this.artist
                        + " for " + mins + ":" + secs;
        System.out.println(played);
    }

}
```

Create instances of the `Song` class for each of these songs.

- "Thriller" by Michael Jackson, duration: 5:57
- "Hello" by Adele, duration: 4:55
- "Ride of the Valkyries" by Richard Wagner, duration: 5:15

When you instantiate each song, you do not need to include quotation marks in the song title.

Then call the `play()` method on each one, which will simulate playing them.

## Problem 2

- LO: (Apply) Students will convert serialized data into objects.

Using the `Song` class from the previous problem, do the following:

Read in lines from standard input and convert them into `Song` objects. Each line contains the song title, artist name, and duration in seconds in comma-separated values format.

```
We Are the Champions,Queen,179
```

If the artist name is an empty string, it means that data is not available. Use the alternate constructor that only accepts title and duration as parameters.

```
We Were the Champions,,6
```

If the song is more than five minutes long, call the object's `play()` method, which will pretend to play it.

In this practice exercise, the song title and artist name values will not contain any commas and data on song title and duration will always be available.

Here is a set of sample input lines:

```
Thriller,Michael Jackson,357
Like a Prayer,Madonna,340
When Doves Cry,Prince,352
I Wanna Dance With Somebody,Whitney Houston,291
Baby One More Time,,211
It's Gonna Be Me,'N Sync,192
Everybody (Backstreet's Back),the Backstreet Boys,224
Rolling in the Deep,Adele,228
Don't Stop Believing,,251
Billie Jean,Michael Jackson,293
```

## Problem 3

- LO: (Remember) Students will recall how to write an alternate constructor for a class.
- LO: (Remember) Students will recall how to throw errors.

Using the `Song` class from the previous problem, do the following:

- Add alternate constructor for when only the duration is known. Use `"Untitled Song"` and `"Unknown Artist"` as the default values.
- Edit all constructors to throw an error if an object is instantiated with a negative duration. Use `"Invalid value: song duration cannot be negative."` as the error message.

## Problem 4

- LO: (Apply) Students will modify a class to encapsulate its internal state.

```java
public class TemperatureUnit {

    public String season;
    public double temperature;

    public TemperatureUnit() {
        this.season = "winter";
        this.temperature = 70.0;
    }

    public TemperatureUnit(String season, double temperature) {
        this.season = season;
        this.temperature = temperature;
    }

}
```

The `TemperatureUnit` class stores data about the current season and the temperature in degrees Fahrenheit.

Improve this by **encapsulating** its attributes. Modify the class so that:

- Attributes cannot be directly mutated, instead only accessed via methods called `getTemperature()` and `getSeason()`.
- Temperature can only be changed in increments of 5 degrees, via methods called `makeWarmer()` and `makeColder()`.
- Temperature can be automatically changed to 68 degrees if the season is `"winter"` and 78 degrees if the season is `"summer"`, via a method called `turnOnEnergySaver()`.

## Problem 5

- LO: (Remember) Students will recall how to define a class.
- LO: (Apply) Students will produce a descriptive string representation of an object.

Write a class called `SocialMediaUser` that holds the following information:

- First name of user
- Last name of user
- Age of user
- Number of followers
- Number of posts
- Whether or not their account can be viewed by any other user

The class is only required to have a single constructor, which will receive parameters for all six of these attributes in the order they are listed.

Then write a public method called `showSummary()` that prints a summary of the user as a String in this format:

```
First Last (Age) has # followers and # posts.
```

If other users are not allowed to view the user's account, use this format instead:

```
This user's summary is hidden due to their privacy settings.
```

Ensure that none of the attributes of this class can be directly mutated.

## Problem 6

- LO: (Apply) Students will compute derived attributes for a class.

```java
public class VideoMetaData {

    public VideoMetaData() {
        
    }

    public void play(int duration) {

    }

    public int getNumberOfPlays() {
        return 0;
    }

    public double getAveragePlayDuration() {
        return 0.0;
    }

}
```

Create a class called `VideoMetaData` class to store basic data about videos on an online clip-sharing website. Every time a video is played, the `play()` method is called with a parameter representing the number of seconds the video was played for.

The class is only required to have two methods:

- A method called `getNumberOfPlays()` to return the number of times a video has been played as an integer.
- A method called `getAveragePlayDuration()` to return the average play duration as a double.

You can write the internal functionality of this class in any way that makes sense to you.
